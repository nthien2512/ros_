#include <robot_controller.h>

int main(int argc, char** argv)
{
    ros::init (argc, argv, "robot_controller_cpp");
    RobotController rb_controller;
    ros::Rate Loop(20);

    while(ros::ok())
    {
        ros::spinOnce();    //execute ham` callback
        Loop.sleep();

    }
}
