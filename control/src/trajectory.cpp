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
#include "std_msgs/Float64.h"


using namespace std;

class server {
public:


std_msgs::Float64 joint_position0;
std_msgs::Float64 joint_position1;
std_msgs::Float64 joint_position2;
std_msgs::Float64 joint_position3;
std_msgs::Float64 joint_position4;
std_msgs::Float64 joint_position5;
std_msgs::Float64 joint_position6;
std_msgs::Float64 joint_position7;
std_msgs::Float64 joint_position8;
std_msgs::Float64 joint_position9;
std_msgs::Float64 joint_position10;
std_msgs::Float64 joint_position11;
std_msgs::Float64 joint_velocity0;
std_msgs::Float64 joint_velocity1;
std_msgs::Float64 joint_velocity2;
std_msgs::Float64 joint_velocity3;
std_msgs::Float64 joint_velocity4;
std_msgs::Float64 joint_velocity5;
std_msgs::Float64 joint_velocity6;
std_msgs::Float64 joint_velocity7;
std_msgs::Float64 joint_velocity8;
std_msgs::Float64 joint_velocity9;
std_msgs::Float64 joint_velocity10;
std_msgs::Float64 joint_velocity11;


  void jointStateCallback(const sensor_msgs::JointState::ConstPtr& msg);
};


  

void server::jointStateCallback(const sensor_msgs::JointState::ConstPtr& msg) {

  joint_position0.data = msg->position[0];
  joint_position1.data = msg->position[1];
  joint_position2.data = msg->position[2];
  joint_position3.data = msg->position[3];
  joint_position4.data = msg->position[4];
  joint_position5.data = msg->position[5];
  joint_position6.data = msg->position[6];
  joint_position7.data = msg->position[7];
  joint_position8.data = msg->position[8];
  joint_position9.data = msg->position[9];
  joint_position10.data = msg->position[10];
  joint_position11.data = msg->position[11];
  joint_velocity0.data = msg->velocity[0];
  joint_velocity1.data = msg->velocity[1];
  joint_velocity2.data = msg->velocity[2];
  joint_velocity3.data = msg->velocity[3];
  joint_velocity4.data = msg->velocity[4];
  joint_velocity5.data = msg->velocity[5];
  joint_velocity6.data = msg->velocity[6];
  joint_velocity7.data = msg->velocity[7];
  joint_velocity8.data = msg->velocity[8];
  joint_velocity9.data = msg->velocity[9];
  joint_velocity10.data = msg->velocity[10];
  joint_velocity11.data = msg->velocity[11];
  

}

int main(int argc, char** argv) { 
  server objserver;
  ros::init(argc, argv, "mover_node");
  ros::NodeHandle n;
  ros::AsyncSpinner spinner(1);
  spinner.start();

  bool success;

  ros::Publisher joint_pub = n.advertise<trajectory_msgs::JointTrajectory>("/panda/panda_arm_controller/command", 100, true);
  ros::Subscriber joint_sub = n.subscribe<sensor_msgs::JointState>("/cartesian/solution", 100, &server::jointStateCallback, &objserver);

  trajectory_msgs::JointTrajectory JT;
  

  JT.joint_names.clear();
  JT.joint_names.push_back("panda_joint_x");
  JT.joint_names.push_back("panda_joint_y");
  JT.joint_names.push_back("panda_joint_theta");
  JT.joint_names.push_back("schunk_pw70_joint_pan");
  JT.joint_names.push_back("schunk_pw70_joint_tilt");
  JT.joint_names.push_back("panda_joint_1");
  JT.joint_names.push_back("panda_joint_2");
  JT.joint_names.push_back("panda_joint_3");
  JT.joint_names.push_back("panda_joint_4");
  JT.joint_names.push_back("panda_joint_5");
  JT.joint_names.push_back("panda_joint_6");
  JT.joint_names.push_back("panda_joint_7");
 
  float joint_acceleration = 0.001;
  float joint_effort = 1.0;
  
  trajectory_msgs::JointTrajectoryPoint point1;

while (ros::ok())
   {

  point1.positions.resize(12);
  point1.positions[0] = objserver.joint_position0.data;
  point1.positions[1] = objserver.joint_position1.data;
  point1.positions[2] = objserver.joint_position2.data;
  point1.positions[3] = objserver.joint_position3.data;
  point1.positions[4] = objserver.joint_position4.data;
  point1.positions[5] = objserver.joint_position5.data;
  point1.positions[6] = objserver.joint_position6.data;
  point1.positions[7] = objserver.joint_position7.data;
  point1.positions[8] = objserver.joint_position8.data;
  point1.positions[9] = objserver.joint_position9.data;
  point1.positions[10] = objserver.joint_position10.data;
  point1.positions[11] = objserver.joint_position11.data;
  point1.velocities.resize(12);
  point1.velocities[0] = objserver.joint_velocity0.data;
  point1.velocities[1] = objserver.joint_velocity1.data;
  point1.velocities[2] = objserver.joint_velocity2.data;
  point1.velocities[3] = objserver.joint_velocity3.data;
  point1.velocities[4] = objserver.joint_velocity4.data;
  point1.velocities[5] = objserver.joint_velocity5.data;
  point1.velocities[6] = objserver.joint_velocity6.data;
  point1.velocities[7] = objserver.joint_velocity7.data;
  point1.velocities[8] = objserver.joint_velocity8.data;
  point1.velocities[9] = objserver.joint_velocity9.data;
  point1.velocities[10] = objserver.joint_velocity10.data;
  point1.velocities[11] = objserver.joint_velocity11.data;
  point1.accelerations.resize(12);
  point1.accelerations[0] = joint_acceleration;
  point1.accelerations[1] = joint_acceleration;
  point1.accelerations[2] = joint_acceleration;
  point1.accelerations[3] = joint_acceleration;
  point1.accelerations[4] = joint_acceleration;
  point1.accelerations[5] = joint_acceleration;
  point1.accelerations[6] = joint_acceleration;
  point1.accelerations[7] = joint_acceleration;
  point1.accelerations[8] = joint_acceleration;
  point1.accelerations[9] = joint_acceleration;
  point1.accelerations[10] = joint_acceleration;
  point1.accelerations[11] = joint_acceleration;
  point1.effort.resize(12);
  point1.effort[0] = joint_effort;
  point1.effort[1] = joint_effort;
  point1.effort[2] = joint_effort;
  point1.effort[3] = joint_effort;
  point1.effort[4] = joint_effort;
  point1.effort[5] = joint_effort;
  point1.effort[6] = joint_effort;
  point1.effort[7] = joint_effort;
  point1.effort[8] = joint_effort;
  point1.effort[9] = joint_effort;
  point1.effort[10] = joint_effort;
  point1.effort[11] = joint_effort;
  point1.time_from_start = ros::Duration(0.0001);
  ros::Duration(1).sleep();

  JT.points.resize(1);
  JT.points[0] = point1;

  joint_pub.publish(JT);
  usleep(1000*1000);
  ros::spinOnce();

  cout << objserver.joint_position8.data;
  cout<<"\n";
   }

 
    return(0);
}
