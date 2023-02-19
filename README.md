# vehicle_simulator
## Introdution
This project utilizes the MoveBase and MVSim packages to achieve autonomous navigation of unmanned ground vehicles (UGVs) in ROS. It is designed for beginners to learn about parameter configuration and other related topics.
## Installation
1. Install mvsim: ```sudo apt-get install ros-noetic-mvsim```
2. Install navigation:```sudo inatall-noetic-navigation```
## Usage

   1. Clone this project:
   
   ```git clone https://github.com/Junming-Liang/vehicle_simulator.git```

   2. Source the bash
   
   ```source devel/setup.bash```

   3. Launch simulator
   
   ```roslaunch car_control start_navigation.launch```

## License
This project is licensed under the MIT License. See the LICENSE file for more information.

## Acknowledgements
This project was inspired by [ROS Navigation Stack Tutorials](http://wiki.ros.org/navigation).
Thanks to the [MVSim](https://github.com/MRPT/mvsim) team for providing a great simulator for testing navigation algorithm. Thanks [ChatGPT](https://chat.openai.com/chat) team.