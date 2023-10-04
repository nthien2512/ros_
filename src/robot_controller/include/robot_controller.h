#include "ros/ros.h"
#include <nav_msgs/Path.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Twist.h>
#include <std_srvs/SetBool.h>

class RobotController
{
    private:
        ros::NodeHandle nh_;
        nav_msgs::Path path_;
        geometry_msgs::Pose2D robot_pose_;
        ros::Subscriber path_sub_, robot_pose_sub_;
        ros::Publisher cmd_vel_pub_;
        ros::ServiceServer enable_srv;
        bool enable_moving = false;

    public:
        RobotController()
        {
            path_sub_= nh_.subscribe("path", 1, &RobotController::pathCB, this);
            robot_pose_sub_ = nh_.subscribe("robot_pose", 1, &RobotController::robotposeCB, this);

            cmd_vel_pub_ = nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1);
            enable_srv = nh_.advertiseService("enable_moving", &RobotController::enableCB, this);
        }
        ~RobotController()
        {
        }

        void pathCB(const nav_msgs::Path& path)
        {
            path_=path;
        }

        void robotposeCB(const geometry_msgs::Pose2D& robotpose)
        {
            robot_pose_ = robotpose;
            ROS_INFO_STREAM("Robot pose: "<<robotpose.x<<"-"<<robotpose.y);
        }

        bool enableCB(std_srvs::SetBool::Request& req,
                      std_srvs::SetBool::Response& res)
        {
            enable_moving = req.data;
            res.success = true;
            res.message = "OK";
            return true;
        }

        void execute()
        {
            //code cua bo dieu khien
            geometry_msgs::Twist vel;
            if (enable_moving) {
                //van toc tinh tien
                vel.linear.x = 1.0;
                //toc do goc quay quanh truc z
                vel.angular.z = 1.0;
            } else {
                //van toc tinh tien
                vel.linear.x = 0.0;
                //toc do goc quay quanh truc z
                vel.angular.z = 0.0;
            }
            
            cmd_vel_pub_.publish(vel);
        }
};