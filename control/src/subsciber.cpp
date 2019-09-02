#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <cstdlib>
#include <trajectory_msgs/JointTrajectoryPoint.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
float joint_pos_global;

void callback(const sensor_msgs::JointState & msg)
{
joint_pos_global = msg.position[7];
}

int main(int argc, char** argv) {
//--------//
ros::init(argc, argv, "listener");
ros::NodeHandle nh;
ros::Subscriber sub; sub = nh.subscribe ("/catersian/solution", 10, callback); 


ros::spin();
cout << "Position of joint 3 is" << joint_pos_global << "\n"; 
}
