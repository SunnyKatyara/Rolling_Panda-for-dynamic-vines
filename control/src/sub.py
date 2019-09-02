#!/usr/bin/env python
import rospy
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64

def joint_states_callback(message):
    # filter out joint0 position:
    for i,name in enumerate(message.name):
        if name == "panda_joint_5":
            pos = message.position[i]
            pub.publish(pos)
    return

if __name__ == '__main__':
    rospy.init_node("example_repub")
    pub = rospy.Publisher("joint0_topic", Float64, queue_size=1)
    rospy.Subscriber("/catersian/solution", JointState, joint_states_callback, queue_size=1)
    rospy.spin()
