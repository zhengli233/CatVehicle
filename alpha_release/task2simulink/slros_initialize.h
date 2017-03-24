#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block task2simulink/Subscribe
extern SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_task2simulink_rosgraph_msgs_Clock> Sub_task2simulink_66;

// For Block task2simulink/Subscribe1
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_task2simulink_sensor_msgs_LaserScan> Sub_task2simulink_63;

// For Block task2simulink/Publish
extern SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_task2simulink_geometry_msgs_PolygonStamped> Pub_task2simulink_6;

void slros_node_init(int argc, char** argv);

#endif
