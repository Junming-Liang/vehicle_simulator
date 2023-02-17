#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <car_control/act_msgAction.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "car_control_client_demo");
    car_control::act_msgGoal goal_;
    actionlib::SimpleActionClient<car_control::act_msgAction> action_client("example_action_server",true);
    ROS_INFO("CLIENT:Waiting for server:");
    bool server_exists = action_client.waitForServer(ros::Duration(5.0));
    if(!server_exists){
        ROS_WARN("No server1");
        return 0;
    }
    ROS_INFO("CLIENT:Connected to action server successed!");
    while(true){
        action_client.sendGoal(goal_);
        bool timeout_flag =  action_client.waitForResult(ros::Duration(5.0));
        if(!timeout_flag){
            ROS_WARN("CLIENT:TIME OUT");
        }else{

        }
    }
    return 0;
}