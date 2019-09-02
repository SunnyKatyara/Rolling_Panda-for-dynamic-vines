#!/usr/bin/env python
import rospy
import numpy as np
import actionlib
from actionlib import SimpleActionClient
from actionlib_msgs.msg import *
from actionlib.msg import *
from cartesian_interface.msg import ReachPoseAction, ReachPoseGoal
from geometry_msgs.msg import Pose
from std_msgs.msg import Float32
# Defining goal points...Position and Orientation

def feedback_cb(msg):
    print 'feedback recieved:', msg

def call_server():
  
    client = actionlib.SimpleActionClient('/cartesian/panda_right_mount_link/reach', ReachPoseAction)
    
    client.wait_for_server()
    goal1 = ReachPoseGoal()

    pose1 = Pose()
 
    pose1.position.x = 6.8
    pose1.position.y = 0.0
    pose1.position.z = 0.0
    pose1.orientation.x = 0.0
    pose1.orientation.y = 0.0 
    pose1.orientation.z = 0.0
    pose1.orientation.w = 1.0 
    
    arr1 = np.array([0.0], dtype=float)
    goal1.frames.append(pose1)
    goal1.time.append(arr1)

    client.send_goal(goal1, feedback_cb=feedback_cb)
    client.wait_for_result()
    rospy.sleep(60)

    arr2 = np.array([0.1], dtype=float)
    
    pose2 = Pose()
    pose2.position.x = 6.8 
    pose2.position.y = 0.0
    pose2.position.z = 0.0
    pose2.orientation.x = 0.0
    pose2.orientation.y = 0.0 
    pose2.orientation.z = 0.7854
    pose2.orientation.w = 1.0
    
    goal2 = ReachPoseGoal()
    goal2.frames.append(pose2)
    goal2.time.append(arr2)
   

    client.send_goal(goal2, feedback_cb=feedback_cb)
    client.wait_for_result()
    rospy.sleep(30)
   
    arr3 = np.array([0.2], dtype=float)
    
    pose3 = Pose()

    pose3.position.x = 6.8 
    pose3.position.y = 1.0
    pose3.position.z = 0.0
    pose3.orientation.x = 0.0
    pose3.orientation.y = 0.0 
    pose3.orientation.z = 0.7854
    pose3.orientation.w = 1.0
    
    goal3 = ReachPoseGoal()
    goal3.frames.append(pose3)
    goal3.time.append(arr3)
   

    client.send_goal(goal3, feedback_cb=feedback_cb)
    client.wait_for_result()
    result = client.get_result()
    return result


if __name__ == '__main__':
    
    try:
       rospy.init_node('move_panda')
       result = call_server()

       print 'The result is:', result

    except rospy.ROSInterruptException as e:
       print 'something went wrong:', e
    
    

 


