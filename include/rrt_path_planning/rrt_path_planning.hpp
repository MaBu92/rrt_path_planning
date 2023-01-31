// Declaration file 

#pragma once //designed to include the current source file only once in a single compilation.
#ifndef RRT_PATH_PLANNING //usd for conditional compiling.
#define RRT_PATH_PLANNING
#include <ros/ros.h> // including the ros header file

/* defining the class */
class RrtPathPlanning
{
    public:
        RrtPathPlanning(ros::NodeHandle &nh, ros::NodeHandle &pnh); //constructor method
        ~RrtPathPlanning(); // distructor method
        void runOnce(); // runOnce method to control the flow of program
    private:
        ros::NodeHandle nh_; // Defining the ros NodeHandle variable for registrating the same with the master
};
#endif  
