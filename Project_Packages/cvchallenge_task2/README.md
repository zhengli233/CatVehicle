# About
This seed project gives a starting point to begin working on Task 2 of the CAT Vehicle Challenge

# Get started
Make sure to follow the information on the CPS-VO to install the dependency packages (http://cps-vo.org/group/CATVehicleChallenge)

## Install the CAT Vehicle Simulator
First, make a new workspace and initialize it, then add the catvehicle git repository:
```
cd ~
mkdir -p cvchallenge_task2_ws/src
cd cvchallenge_task2_ws/src
catkin_init_workspace
git clone https://github.com/sprinkjm/catvehicle.git
git clone https://github.com/sprinkjm/obstaclestopper.git
git clone https://github.com/sprinkjm/cvchallenge_task2.git
```

## Updates to the Task 1 seed
Your task1.py from cvchallenge_task1 will not run with the newest version catvehicle simulator, since we changed the name of the robot. The updated task1.py included in this release will work well, however! Simply perform the following after doing a build:

```
cd ~/cvchallenge_task2_ws/
catkin_make
source devel/setup.bash
roslaunch cvchallenge_task2 catvehicle_custom.launch worldfile:=world1.world
```
And in a new tab:
```
cd ~/cvchallenge_task2_ws
source devel/setup.bash
rosrun rviz rviz
```
Once you have loaded the vehicle and can see its sensor data, you can now run the task1.py to see how a /detections topic is visualized. 

```
cd ~/cvchallenge_task2_ws
source devel/setup.bash
rosrun cvchallenge_task2 task1.py
```

Note that these detections are from simulated data, but are using the correct type and topic of what we expect you to detect.

# What do you do next?
Think about how to take the sensor data you can get from the catvehicle robot, and convert it into a streaming update of the relevant detections you see within 4m of the robot. 

For example, a valid solution is to take each laser point you receive, and make a detection out of that point. But how much radius does the detection need? If you detect lots of things close to one another, should they each be an individual detection, or is that group of points an actual object? Can a laser sensor's detection be supplemented with the camera data from the vehicle?

From here, it is up to you to see where to go: all we ask is that you provide the /detections topic with what you find.

When submitting task2, you will be archiving this seed alongside any other packages and/or nodes you create, and you will add an additional launch file which will start up all those ROS nodes. More details to fill you in will follow in the tutorials.

Good luck!

# Acknowledgments

## License
Copyright (c) 2016-2017 Arizona Board of Regents
All rights reserved

Permission is hereby granted, without written agreement and without 
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the 
above copyright notice and the following two paragraphs appear in 
all copies of this software.
 
IN NO EVENT SHALL THE ARIZONA BOARD OF REGENTS BE LIABLE TO ANY PARTY 
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES 
ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN 
IF THE ARIZONA BOARD OF REGENTS HAS BEEN ADVISED OF THE POSSIBILITY OF 
SUCH DAMAGE.

THE ARIZONA BOARD OF REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, 
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY 
AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE PROVIDED HEREUNDER
IS ON AN "AS IS" BASIS, AND THE ARIZONA BOARD OF REGENTS HAS NO OBLIGATION
TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.

## Authors
* Jonathan Sprinkle (sprinkjm@email.arizona.edu)
* Swati Munjal (smunjal@email.arizona.edu)

## Support
This work was supported by the project "Cyber-Physical Systems Virtual Organization: Active Resources" NSF 1521617. Any opinions, findings, and conclusions or recommendations expressed in this material are those of the author(s) and do not necessarily reflect the views of the National Science Foundation. Additional support for the CAT Vehicle Challenge is provided by MathWorks.
