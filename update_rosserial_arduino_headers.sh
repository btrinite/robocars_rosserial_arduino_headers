#!/bin/sh
rm -r -f ./ros_lib
rm -f ./ros_lib.tgz
rosrun rosserial_arduino make_libraries.py .
sleep 2
cp ros_lib_fix/ArduinoHardware.h ../ros_lib
cp ros_lib_fix/ros.h ../ros_lib
git add -A ros_lib
git commit -m "Update"
git push origin master



