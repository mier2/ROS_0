#include <ros/ros.h>
#include <std_msgs/String.h>

void p_callback(std_msgs::String msg){
    ROS_INFO(msg.data.c_str());
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "s_node");
    
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("topic_1", 10, p_callback);

    while(ros::ok()){
        ros::spinOnce();
    }
    return 0;
}
