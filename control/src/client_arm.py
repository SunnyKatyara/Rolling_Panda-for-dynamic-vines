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
  
    client = actionlib.SimpleActionClient('/cartesian/camera_link/reach', ReachPoseAction)
    
    client.wait_for_server()

    pose1 = Pose()
 
    pose1.position.x = 3.0
    pose1.position.y = 0.0
    pose1.position.z = 0.1
    pose1.orientation.x = 0.0
    pose1.orientation.y = 0.0 
    pose1.orientation.z = 0.7584
    pose1.orientation.w = 1.0 
    
    arr1 = np.array([0.0], dtype=float)

    goal = ReachPoseGoal()
    goal.frames.append(pose1)
    goal.time.append(arr1)
   

    client.send_goal(goal, feedback_cb=feedback_cb)
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
    
    

 


