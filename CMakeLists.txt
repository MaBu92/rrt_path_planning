# Defining the cmake vesrion and project name
cmake_minimum_required(VERSION 2.8.3)
project(rrt_path_planning)

# compiling the code with c++11
add_compile_options(-std=c++11)

# Finding the packages required (dependencies for this package)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

# Declaring the dependencies for packages that depend on this package.
catkin_package(
  INCLUDE_DIRS include/rrt_path_planning
  CATKIN_DEPENDS roscpp rospy std_msgs
)

# Add the given directories to those the compiler uses to search for include files. 
# So nothing but giving the location of the include files
include_directories(
  include/rrt_path_planning
  ${catkin_INCLUDE_DIRS}
)

# Adding the executable files for the build
add_executable(${PROJECT_NAME}_node src/rrt_path_planning.cpp src/rrt_path_planning_node.cpp)

# linking the libraries for successful binary genertion
target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
)
