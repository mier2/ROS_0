#include <ros/ros.h>

int main(int argc, char  *argv[])
{
    ros::init(argc, argv, "p_node");
    printf("hello from p_node\n");
    while(ros::ok()){
        printf("operating p_node\n");
    }
    return 0;
}
