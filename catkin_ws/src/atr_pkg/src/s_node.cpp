#include <ros/ros.h>
#include <std_msgs/String.h>
#include <res_msgs/ResDimension.h>
#include <string>

void p_callback(res_msgs::ResDimension msg){
    ROS_WARN(msg.file_name.c_str());
    ROS_WARN("%d valence", msg.vm[0]);
    ROS_WARN("%d emotion", msg.vm[1]);
    ROS_WARN("%d time", msg.res_time);
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
