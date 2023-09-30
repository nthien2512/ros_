#include "ros/ros.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "demo_cpp");
    ros::NodeHandle nh;
    
    std::cout << "demo" << std::endl;
    while (ros::ok()) {
    }
    std::cout << "end demo" << std::endl;
    return 1;
}