#!/usr/bin/env python

import rospy # Import the rospy library to use ROS functionalities
import cv2 # Import the OpenCV library for computer vision
from cv_bridge import CvBridge # Import CvBridge to convert OpenCV images to ROS messages
from sensor_msgs.msg import Image # Import the Image message type from ROS sensor_msgs

def detect_shape(frame):
    # Convert the color image to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Apply a binary threshold to the grayscale image
    _, threshold = cv2.threshold(gray, 240, 255, cv2.THRESH_BINARY)

    # Find the contours of the binary image
    contours, _ = cv2.findContours(threshold, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    # Iterate over the contours and approximate the polygonal curves
    for contour in contours:
        approx = cv2.approxPolyDP(contour, 0.01 * cv2.arcLength(contour, True), True)

        # Determine the number of sides of the polygonal curve
        sides = len(approx)

        # Classify the polygonal curve based on the number of sides
        if sides == 3:
            return "Triangle"
        elif sides == 4:
            return "Square"
        elif sides == 5:
            return "Pentagon"
        else:
            return "Unknown"

def callback(data):
    # Convert the ROS message to an OpenCV image
    cv_image = CvBridge().imgmsg_to_cv2(data, "bgr8")

    # Detect the geometric shape in the image
    shape = detect_shape(cv_image)

    # Publish the detected shape to the 'geometric_shape' topic
    pub.publish(shape)

if __name__ == '__main__':
    # Initialize the ROS node
    rospy.init_node('shape_detector', anonymous=True)

    # Subscribe to the 'camera/image_raw' topic to receive video feed from the webcam
    rospy.Subscriber("camera/image_raw", Image, callback)

    # Publish the detected geometric shape to the 'geometric_shape' topic
    pub = rospy.Publisher('geometric_shape', String, queue_size=10)

    # Run the ROS node
    rospy.spin()
