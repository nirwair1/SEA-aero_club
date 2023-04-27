#!/usr/bin/env python2
import rospy 

if __name__=='__main__':
    rospy.init_node("test_node")

    rospy.loginfo("hello form test call")
    rospy.logwarn("this is an warning")
    rospy.logerr("this is an error")
    rospy.sleep(1.0)

    rospy.loginfo("End of program")
