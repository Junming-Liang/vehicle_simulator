#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <car_control/act_msgAction.h>

class ActionServer_Demo{
private:
    ros::NodeHandle nh;
    actionlib::SimpleActionServer<car_control::act_msgAction> as_;//Action server
    car_control::act_msgGoal goal_;//Client message goal 
    car_control::act_msgResult result_;//Client message result
    car_control::act_msgFeedback feedback_;//Client message feedback
public:
    ActionServer_Demo();
    ~ActionServer_Demo(){};
    void executeCB(const actionlib::SimpleActionServer<car_control::act_msgAction>::GoalConstPtr &goal);
};
ActionServer_Demo::ActionServer_Demo():as_(nh,"example_action_server",boost::bind(&ActionServer_Demo::executeCB,this,_1
),false){
    ROS_INFO("Action server is loading...");
    as_.start();
}
void ActionServer_Demo::executeCB(const actionlib::SimpleActionServer<car_control::act_msgAction>::GoalConstPtr &goal){
    as_.setSucceeded(result_);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "car_control_action_server");
    ros::Time::init();
    ActionServer_Demo acs_demo;
    ros::Rate rate(20);
    while(ros::ok()){
        ros::spinOnce();
        rate.sleep();
    }
    return 0;
}