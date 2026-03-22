
# ROC2 Task Publisher and Subscriber 🎯

### Project Description
This project demonistrates communication between two ROC2 nodes using the Publisher,Subscriber model.

### Node implementation 

## Distance publisher Node

- publishes random distance values every second

## Distance Subscriber Node

- print received values to the terminal 


## Technical Details
### Technologies Used

- ROS2 Humble
- Python (rclpy library)
- Ubuntu 22.04

## Implementation
For Software:
### Installation
- Ubuntu 22.04
- ROS2 Humble

## Run

navigate to workspace
- cd /task3/ros2_ws

Build the project
- colcon build

Source the Workspace
-source install/setup.bash

Run publisher Node (terminal 1)
- ros2 run rover_project publisher

Run Subscriberr Node (terminal 2)
- cd task3/ros2_ws
- source install/setup.bash
- ros2 run rover_project subscriber

# Project Output

## Screenshots 
### Publisher Node

<img width="651" height="731" alt="Screenshot from 2026-03-22 22-57-29" src="https://github.com/user-attachments/assets/b976a8ed-9dce-4ae5-8a46-355548d307d7" />

### Subscriber Node

<img width="696" height="733" alt="Screenshot from 2026-03-22 22-57-56" src="https://github.com/user-attachments/assets/36a01110-e413-4d4c-bb56-1beff74d7bdf" />





---
Made for Horizon CUSAT recruitment  
