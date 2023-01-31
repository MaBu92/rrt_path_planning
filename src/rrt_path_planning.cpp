#include "rrt_path_planning.hpp"

//constructor method
RrtPathPlanning::RrtPathPlanning(ros::NodeHandle &nh, ros::NodeHandle &pnh)
{
    nh_ = nh;
    std::cout<<"from Constructor \n";
    // storing the values in the member variable
    // get the parameters or configurations and store them in member variables
    // initialize the publisher and subscribers
}

// Distructor method
RrtPathPlanning::~RrtPathPlanning()
{
    std::cout<<"from Distructor \n";
    // Free up the memory assigned from heap
}

void RrtPathPlanning::runOnce()
{
    std::cout<<"from Runonce \n";
}
