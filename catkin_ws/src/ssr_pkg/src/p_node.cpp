#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char  *argv[])
{
    ros::init(argc, argv, "p_node");
    printf("hello from p_node\n");
    
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("topic_1",10);

    ros::Rate loop_rate(10);

    while(ros::ok()){
        printf("operating p_node\n");
        std_msgs::String msg;
        msg.data = "sending msg from p_node";
        pub.publish(msg);
        loop_rate.sleep();
    }
    return 0;
}
