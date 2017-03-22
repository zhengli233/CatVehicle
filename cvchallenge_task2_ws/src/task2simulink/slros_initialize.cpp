#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "task2simulink";

// For Block task2simulink/Subscribe
SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_task2simulink_rosgraph_msgs_Clock> Sub_task2simulink_66;

// For Block task2simulink/Subscribe1
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_task2simulink_sensor_msgs_LaserScan> Sub_task2simulink_63;

// For Block task2simulink/Publish
SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_task2simulink_geometry_msgs_PolygonStamped> Pub_task2simulink_6;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

