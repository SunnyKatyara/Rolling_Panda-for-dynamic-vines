#include <ros/ros.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <cstdlib>


using namespace std;
float PI = 3.14159;

int main(int argc, char** argv) {

    ros::init(argc, argv, "move_arm");  
        ros::NodeHandle nh;
    ros::Publisher publisher_arm_command = nh.advertise<trajectory_msgs::JointTrajectory>(  "/panda/panda_arm_controller/command", 
                                                10, 
                                                true    );
    // create arm command message
    float joint_velocity = 0.001;
    float joint_acceleration = 0.001;
    float joint_effort = 1.0;
    trajectory_msgs::JointTrajectory message_arm_command;
    message_arm_command.joint_names.resize(12);
    message_arm_command.joint_names[0] = "panda_joint_x";
    message_arm_command.joint_names[1] = "panda_joint_y";
    message_arm_command.joint_names[2] = "panda_joint_theta";
    message_arm_command.joint_names[3] = "schunk_pw70_joint_pan";
    message_arm_command.joint_names[4] = "schunk_pw70_joint_tilt";
    message_arm_command.joint_names[5] = "panda_joint_1";
    message_arm_command.joint_names[6] = "panda_joint_2";
    message_arm_command.joint_names[7] = "panda_joint_3";
    message_arm_command.joint_names[8] = "panda_joint_4";
    message_arm_command.joint_names[9] = "panda_joint_5";
    message_arm_command.joint_names[10] = "panda_joint_6";
    message_arm_command.joint_names[11] = "panda_joint_7";
    trajectory_msgs::JointTrajectoryPoint point1, point2, point3, point4, point5, point6, point7, point8;
    point1.positions.resize(12);
    point1.positions[0] = 450.0 * (PI / 180.0);
    point1.positions[1] = 0.0 * (PI / 180.0);
    point1.positions[2] = 0.0 * (PI / 180.0);
    point1.positions[3] = 0.0 * (PI / 180.0);
    point1.positions[4] = 0.0 * (PI / 180.0);
    point1.positions[5] = 0.0 * (PI / 180.0);
    point1.positions[6] = 0.0 * (PI / 180.0);
    point1.positions[7] = 0.0 * (PI / 180.0);
    point1.positions[8] = 0.0 * (PI / 180.0);
    point1.positions[9] = 0.0 * (PI / 180.0);
    point1.positions[10] = 0.0 * (PI / 180.0);
    point1.positions[11] = 0.0 * (PI / 180.0);
    point1.velocities.resize(12);
    point1.velocities[0] = joint_velocity;
    point1.velocities[1] = joint_velocity;
    point1.velocities[2] = joint_velocity;
    point1.velocities[3] = joint_velocity;
    point1.velocities[4] = joint_velocity;
    point1.velocities[5] = joint_velocity;
    point1.velocities[6] = joint_velocity;
    point1.velocities[7] = joint_velocity;
    point1.velocities[8] = joint_velocity;
    point1.velocities[9] = joint_velocity;
    point1.velocities[10] = joint_velocity;
    point1.velocities[11] = joint_velocity;
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
    ros::Duration ten_seconds(10.0);
    point1.time_from_start = ten_seconds;
    point2.positions.resize(12);
    point2.positions[0] = 450.0 * (PI / 180.0);
    point2.positions[1] = 0.0 * (PI / 180.0);
    point2.positions[2] = 90.0 * (PI / 180.0);
    point2.positions[3] = 0.0 * (PI / 180.0);
    point2.positions[4] = 0.0 * (PI / 180.0);
    point2.positions[5] = 0.0 * (PI / 180.0);
    point2.positions[6] = 0.0 * (PI / 180.0);
    point2.positions[7] = 0.0 * (PI / 180.0);
    point2.positions[8] = 0.0 * (PI / 180.0);
    point2.positions[9] = 0.0 * (PI / 180.0);
    point2.positions[10] = 0.0 * (PI / 180.0);
    point2.positions[11] = 0.0 * (PI / 180.0);
    point2.velocities.resize(12);
    point2.velocities[0] = joint_velocity;
    point2.velocities[1] = joint_velocity;
    point2.velocities[2] = joint_velocity;
    point2.velocities[3] = joint_velocity;
    point2.velocities[4] = joint_velocity;
    point2.velocities[5] = joint_velocity;
    point2.velocities[6] = joint_velocity;
    point2.velocities[7] = joint_velocity;
    point2.velocities[8] = joint_velocity;
    point2.velocities[9] = joint_velocity;
    point2.velocities[10] = joint_velocity;
    point2.velocities[11] = joint_velocity;
    point2.accelerations.resize(12);
    point2.accelerations[0] = joint_acceleration;
    point2.accelerations[1] = joint_acceleration;
    point2.accelerations[2] = joint_acceleration;
    point2.accelerations[3] = joint_acceleration;
    point2.accelerations[4] = joint_acceleration;
    point2.accelerations[5] = joint_acceleration;
    point2.accelerations[6] = joint_acceleration;
    point2.accelerations[7] = joint_acceleration;
    point2.accelerations[8] = joint_acceleration;
    point2.accelerations[9] = joint_acceleration;
    point2.accelerations[10] = joint_acceleration;
    point2.accelerations[11] = joint_acceleration;
    point2.effort.resize(12);
    point2.effort[0] = joint_effort;
    point2.effort[1] = joint_effort;
    point2.effort[2] = joint_effort;
    point2.effort[3] = joint_effort;
    point2.effort[4] = joint_effort;
    point2.effort[5] = joint_effort;
    point2.effort[6] = joint_effort;
    point2.effort[7] = joint_effort;
    point2.effort[8] = joint_effort;
    point2.effort[9] = joint_effort;
    point2.effort[10] = joint_effort;
    point2.effort[11] = joint_effort;
    ros::Duration twenty_seconds(20.0);
    point2.time_from_start = twenty_seconds;
    point3.positions.resize(12);
    point3.positions[0] = 450.0 * (PI / 180.0);
    point3.positions[1] = 0.0 * (PI / 180.0);
    point3.positions[2] = 90.0 * (PI / 180.0);
    point3.positions[3] = 0.0 * (PI / 180.0);
    point3.positions[4] = 0.0 * (PI / 180.0);
    point3.positions[5] = 0.0 * (PI / 180.0);
    point3.positions[6] = 90.0 * (PI / 180.0);
    point3.positions[7] = -90.0 * (PI / 180.0);
    point3.positions[8] = 90.0 * (PI / 180.0);
    point3.positions[9] = 90.0 * (PI / 180.0);
    point3.positions[10] = 0.0 * (PI / 180.0);
    point3.positions[11] = 0.0 * (PI / 180.0);
    point3.velocities.resize(12);
    point3.velocities[0] = joint_velocity;
    point3.velocities[1] = joint_velocity;
    point3.velocities[2] = joint_velocity;
    point3.velocities[3] = joint_velocity;
    point3.velocities[4] = joint_velocity;
    point3.velocities[5] = joint_velocity;
    point3.velocities[6] = joint_velocity;
    point3.velocities[7] = joint_velocity;
    point3.velocities[8] = joint_velocity;
    point3.velocities[9] = joint_velocity;
    point3.velocities[10] = joint_velocity;
    point3.velocities[11] = joint_velocity;
    point3.accelerations.resize(12);
    point3.accelerations[0] = joint_acceleration;
    point3.accelerations[1] = joint_acceleration;
    point3.accelerations[2] = joint_acceleration;
    point3.accelerations[3] = joint_acceleration;
    point3.accelerations[4] = joint_acceleration;
    point3.accelerations[5] = joint_acceleration;
    point3.accelerations[6] = joint_acceleration;
    point3.accelerations[7] = joint_acceleration;
    point3.accelerations[8] = joint_acceleration;
    point3.accelerations[9] = joint_acceleration;
    point3.accelerations[10] = joint_acceleration;
    point3.accelerations[11] = joint_acceleration;
    point3.effort.resize(12);
    point3.effort[0] = joint_effort;
    point3.effort[1] = joint_effort;
    point3.effort[2] = joint_effort;
    point3.effort[3] = joint_effort;
    point3.effort[4] = joint_effort;
    point3.effort[5] = joint_effort;
    point3.effort[6] = joint_effort;
    point3.effort[7] = joint_effort;
    point3.effort[8] = joint_effort;
    point3.effort[9] = joint_effort;
    point3.effort[10] = joint_effort;
    point3.effort[11] = joint_effort;
    ros::Duration thirty_seconds(30.0);
    point3.time_from_start = thirty_seconds;
    point4.positions.resize(12);
    point4.positions[0] = 450.0 * (PI / 180.0);
    point4.positions[1] = 0.0 * (PI / 180.0);
    point4.positions[2] = 90.0 * (PI / 180.0);
    point4.positions[3] = 0.0 * (PI / 180.0);
    point4.positions[4] = 0.0 * (PI / 180.0);
    point4.positions[5] = 0.0 * (PI / 180.0);
    point4.positions[6] = 0.0 * (PI / 180.0);
    point4.positions[7] = 0.0 * (PI / 180.0);
    point4.positions[8] = 0.0 * (PI / 180.0);
    point4.positions[9] = 0.0 * (PI / 180.0);
    point4.positions[10] = 0.0 * (PI / 180.0);
    point4.positions[11] = 0.0 * (PI / 180.0);
    point4.velocities.resize(12);
    point4.velocities[0] = joint_velocity;
    point4.velocities[1] = joint_velocity;
    point4.velocities[2] = joint_velocity;
    point4.velocities[3] = joint_velocity;
    point4.velocities[4] = joint_velocity;
    point4.velocities[5] = joint_velocity;
    point4.velocities[6] = joint_velocity;
    point4.velocities[7] = joint_velocity;
    point4.velocities[8] = joint_velocity;
    point4.velocities[9] = joint_velocity;
    point4.velocities[10] = joint_velocity;
    point4.velocities[11] = joint_velocity;
    point4.accelerations.resize(12);
    point4.accelerations[0] = joint_acceleration;
    point4.accelerations[1] = joint_acceleration;
    point4.accelerations[2] = joint_acceleration;
    point4.accelerations[3] = joint_acceleration;
    point4.accelerations[4] = joint_acceleration;
    point4.accelerations[5] = joint_acceleration;
    point4.accelerations[6] = joint_acceleration;
    point4.accelerations[7] = joint_acceleration;
    point4.accelerations[8] = joint_acceleration;
    point4.accelerations[9] = joint_acceleration;
    point4.accelerations[10] = joint_acceleration;
    point4.accelerations[11] = joint_acceleration;
    point4.effort.resize(12);
    point4.effort[0] = joint_effort;
    point4.effort[1] = joint_effort;
    point4.effort[2] = joint_effort;
    point4.effort[3] = joint_effort;
    point4.effort[4] = joint_effort;
    point4.effort[5] = joint_effort;
    point4.effort[6] = joint_effort;
    point4.effort[7] = joint_effort;
    point4.effort[8] = joint_effort;
    point4.effort[9] = joint_effort;
    point4.effort[10] = joint_effort;
    point4.effort[11] = joint_effort;
    ros::Duration forty_seconds(40.0);
    point4.time_from_start = forty_seconds;
    point5.positions.resize(12);
    point5.positions[0] = 450.0 * (PI / 180.0);
    point5.positions[1] = 0.0 * (PI / 180.0);
    point5.positions[2] = 0.0 * (PI / 180.0);
    point5.positions[3] = 0.0 * (PI / 180.0);
    point5.positions[4] = 0.0 * (PI / 180.0);
    point5.positions[5] = 0.0 * (PI / 180.0);
    point5.positions[6] = 0.0 * (PI / 180.0);
    point5.positions[7] = 0.0 * (PI / 180.0);
    point5.positions[8] = 0.0 * (PI / 180.0);
    point5.positions[9] = 0.0 * (PI / 180.0);
    point5.positions[10] = 0.0 * (PI / 180.0);
    point5.positions[11] = 0.0 * (PI / 180.0);
    point5.velocities.resize(12);
    point5.velocities[0] = joint_velocity;
    point5.velocities[1] = joint_velocity;
    point5.velocities[2] = joint_velocity;
    point5.velocities[3] = joint_velocity;
    point5.velocities[4] = joint_velocity;
    point5.velocities[5] = joint_velocity;
    point5.velocities[6] = joint_velocity;
    point5.velocities[7] = joint_velocity;
    point5.velocities[8] = joint_velocity;
    point5.velocities[9] = joint_velocity;
    point5.velocities[10] = joint_velocity;
    point5.velocities[11] = joint_velocity;
    point5.accelerations.resize(12);
    point5.accelerations[0] = joint_acceleration;
    point5.accelerations[1] = joint_acceleration;
    point5.accelerations[2] = joint_acceleration;
    point5.accelerations[3] = joint_acceleration;
    point5.accelerations[4] = joint_acceleration;
    point5.accelerations[5] = joint_acceleration;
    point5.accelerations[6] = joint_acceleration;
    point5.accelerations[7] = joint_acceleration;
    point5.accelerations[8] = joint_acceleration;
    point5.accelerations[9] = joint_acceleration;
    point5.accelerations[10] = joint_acceleration;
    point5.accelerations[11] = joint_acceleration;
    point5.effort.resize(12);
    point5.effort[0] = joint_effort;
    point5.effort[1] = joint_effort;
    point5.effort[2] = joint_effort;
    point5.effort[3] = joint_effort;
    point5.effort[4] = joint_effort;
    point5.effort[5] = joint_effort;
    point5.effort[6] = joint_effort;
    point5.effort[7] = joint_effort;
    point5.effort[8] = joint_effort;
    point5.effort[9] = joint_effort;
    point5.effort[10] = joint_effort;
    point5.effort[11] = joint_effort;
    ros::Duration fifty_seconds(50.0);
    point5.time_from_start = fifty_seconds;
    point6.positions.resize(12);
    point6.positions[0] = 565.0 * (PI / 180.0);
    point6.positions[1] = 0.0 * (PI / 180.0);
    point6.positions[2] = 0.0 * (PI / 180.0);
    point6.positions[3] = 0.0 * (PI / 180.0);
    point6.positions[4] = 0.0 * (PI / 180.0);
    point6.positions[5] = 0.0 * (PI / 180.0);
    point6.positions[6] = 0.0 * (PI / 180.0);
    point6.positions[7] = 0.0 * (PI / 180.0);
    point6.positions[8] = 0.0 * (PI / 180.0);
    point6.positions[9] = 0.0 * (PI / 180.0);
    point6.positions[10] = 0.0 * (PI / 180.0);
    point6.positions[11] = 0.0 * (PI / 180.0);
    point6.velocities.resize(12);
    point6.velocities[0] = joint_velocity;
    point6.velocities[1] = joint_velocity;
    point6.velocities[2] = joint_velocity;
    point6.velocities[3] = joint_velocity;
    point6.velocities[4] = joint_velocity;
    point6.velocities[5] = joint_velocity;
    point6.velocities[6] = joint_velocity;
    point6.velocities[7] = joint_velocity;
    point6.velocities[8] = joint_velocity;
    point6.velocities[9] = joint_velocity;
    point6.velocities[10] = joint_velocity;
    point6.velocities[11] = joint_velocity;
    point6.accelerations.resize(12);
    point6.accelerations[0] = joint_acceleration;
    point6.accelerations[1] = joint_acceleration;
    point6.accelerations[2] = joint_acceleration;
    point6.accelerations[3] = joint_acceleration;
    point6.accelerations[4] = joint_acceleration;
    point6.accelerations[5] = joint_acceleration;
    point6.accelerations[6] = joint_acceleration;
    point6.accelerations[7] = joint_acceleration;
    point6.accelerations[8] = joint_acceleration;
    point6.accelerations[9] = joint_acceleration;
    point6.accelerations[10] = joint_acceleration;
    point6.accelerations[11] = joint_acceleration;
    point6.effort.resize(12);
    point6.effort[0] = joint_effort;
    point6.effort[1] = joint_effort;
    point6.effort[2] = joint_effort;
    point6.effort[3] = joint_effort;
    point6.effort[4] = joint_effort;
    point6.effort[5] = joint_effort;
    point6.effort[6] = joint_effort;
    point6.effort[7] = joint_effort;
    point6.effort[8] = joint_effort;
    point6.effort[9] = joint_effort;
    point6.effort[10] = joint_effort;
    point6.effort[11] = joint_effort;
    ros::Duration sixty_seconds(60.0);
    point6.time_from_start = sixty_seconds;
    point7.positions.resize(12);
    point7.positions[0] = 565.0 * (PI / 180.0);
    point7.positions[1] = 0.0 * (PI / 180.0);
    point7.positions[2] = 90.0 * (PI / 180.0);
    point7.positions[3] = 0.0 * (PI / 180.0);
    point7.positions[4] = 0.0 * (PI / 180.0);
    point7.positions[5] = 0.0 * (PI / 180.0);
    point7.positions[6] = 0.0 * (PI / 180.0);
    point7.positions[7] = 0.0 * (PI / 180.0);
    point7.positions[8] = 0.0 * (PI / 180.0);
    point7.positions[9] = 0.0 * (PI / 180.0);
    point7.positions[10] = 0.0 * (PI / 180.0);
    point7.positions[11] = 0.0 * (PI / 180.0);
    point7.velocities.resize(12);
    point7.velocities[0] = joint_velocity;
    point7.velocities[1] = joint_velocity;
    point7.velocities[2] = joint_velocity;
    point7.velocities[3] = joint_velocity;
    point7.velocities[4] = joint_velocity;
    point7.velocities[5] = joint_velocity;
    point7.velocities[6] = joint_velocity;
    point7.velocities[7] = joint_velocity;
    point7.velocities[8] = joint_velocity;
    point7.velocities[9] = joint_velocity;
    point7.velocities[10] = joint_velocity;
    point7.velocities[11] = joint_velocity;
    point7.accelerations.resize(12);
    point7.accelerations[0] = joint_acceleration;
    point7.accelerations[1] = joint_acceleration;
    point7.accelerations[2] = joint_acceleration;
    point7.accelerations[3] = joint_acceleration;
    point7.accelerations[4] = joint_acceleration;
    point7.accelerations[5] = joint_acceleration;
    point7.accelerations[6] = joint_acceleration;
    point7.accelerations[7] = joint_acceleration;
    point7.accelerations[8] = joint_acceleration;
    point7.accelerations[9] = joint_acceleration;
    point7.accelerations[10] = joint_acceleration;
    point7.accelerations[11] = joint_acceleration;
    point7.effort.resize(12);
    point7.effort[0] = joint_effort;
    point7.effort[1] = joint_effort;
    point7.effort[2] = joint_effort;
    point7.effort[3] = joint_effort;
    point7.effort[4] = joint_effort;
    point7.effort[5] = joint_effort;
    point7.effort[6] = joint_effort;
    point7.effort[7] = joint_effort;
    point7.effort[8] = joint_effort;
    point7.effort[9] = joint_effort;
    point7.effort[10] = joint_effort;
    point7.effort[11] = joint_effort;
    ros::Duration seventy_seconds(70.0);
    point7.time_from_start = seventy_seconds;
    point8.positions.resize(12);
    point8.positions[0] = 565.0 * (PI / 180.0);
    point8.positions[1] = 360.0 * (PI / 180.0);
    point8.positions[2] = 90.0 * (PI / 180.0);
    point8.positions[3] = 0.0 * (PI / 180.0);
    point8.positions[4] = 0.0 * (PI / 180.0);
    point8.positions[5] = 0.0 * (PI / 180.0);
    point8.positions[6] = 0.0 * (PI / 180.0);
    point8.positions[7] = 0.0 * (PI / 180.0);
    point8.positions[8] = 0.0 * (PI / 180.0);
    point8.positions[9] = 0.0 * (PI / 180.0);
    point8.positions[10] = 0.0 * (PI / 180.0);
    point8.positions[11] = 0.0 * (PI / 180.0);
    point8.velocities.resize(12);
    point8.velocities[0] = joint_velocity;
    point8.velocities[1] = joint_velocity;
    point8.velocities[2] = joint_velocity;
    point8.velocities[3] = joint_velocity;
    point8.velocities[4] = joint_velocity;
    point8.velocities[5] = joint_velocity;
    point8.velocities[6] = joint_velocity;
    point8.velocities[7] = joint_velocity;
    point8.velocities[8] = joint_velocity;
    point8.velocities[9] = joint_velocity;
    point8.velocities[10] = joint_velocity;
    point8.velocities[11] = joint_velocity;
    point8.accelerations.resize(12);
    point8.accelerations[0] = joint_acceleration;
    point8.accelerations[1] = joint_acceleration;
    point8.accelerations[2] = joint_acceleration;
    point8.accelerations[3] = joint_acceleration;
    point8.accelerations[4] = joint_acceleration;
    point8.accelerations[5] = joint_acceleration;
    point8.accelerations[6] = joint_acceleration;
    point8.accelerations[7] = joint_acceleration;
    point8.accelerations[8] = joint_acceleration;
    point8.accelerations[9] = joint_acceleration;
    point8.accelerations[10] = joint_acceleration;
    point8.accelerations[11] = joint_acceleration;
    point8.effort.resize(12);
    point8.effort[0] = joint_effort;
    point8.effort[1] = joint_effort;
    point8.effort[2] = joint_effort;
    point8.effort[3] = joint_effort;
    point8.effort[4] = joint_effort;
    point8.effort[5] = joint_effort;
    point8.effort[6] = joint_effort;
    point8.effort[7] = joint_effort;
    point8.effort[8] = joint_effort;
    point8.effort[9] = joint_effort;
    point8.effort[10] = joint_effort;
    point8.effort[11] = joint_effort;
    ros::Duration eighty_seconds(80.0);
    point8.time_from_start = eighty_seconds;
    message_arm_command.points.resize(8);
    message_arm_command.points[0] = point1;
    message_arm_command.points[1] = point2;
    message_arm_command.points[2] = point3;
    message_arm_command.points[3] = point4;
    message_arm_command.points[4] = point5;
    message_arm_command.points[5] = point6;
    message_arm_command.points[6] = point7;
    message_arm_command.points[7] = point8;
    publisher_arm_command.publish(message_arm_command);

    // don't just spin forever.  wait for the arm motion to stop.
    ros::spin();

    return(0);
}