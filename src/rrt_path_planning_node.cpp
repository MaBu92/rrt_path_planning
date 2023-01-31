// Node file to create object and initialising the ROS node
#include "rrt_path_planning.hpp" 

int main(int argc, char** argv)
{
    /* initialising the ROS node creating node handle
    for regestring it to the master and then private node handle to
    handle the parameters */
    ros::init(argc, argv, "rrt_path_planning"); 
    ros::NodeHandle nh;
    ros::NodeHandle pnh("~"); 
    
    RrtPathPlanning node(nh,pnh); // Creating the object

    ros::Rate rate(1.0); // Defing the looping rate

    /* Looking for any interupt else it will continue looping */
    while (ros::ok())
    {   
        node.runOnce();
        ros::spinOnce();
        rate.sleep();
    }
    return 0;
}
