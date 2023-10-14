#include <action_client.h>

int main(int argc, char** argv)
{
    ros::init (argc, argv, "action_client");
    ActionClient client;
    client.execute();
    return 1;
}