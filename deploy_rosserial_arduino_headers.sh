#!/bin/sh

if [ $# -eq 0 ]
  then
    echo "usage : $0 <Path to Arduino Libraries>"
fi

if [ -d "$1/ros_lib" ]; then
    echo "Found existing $1/ros_lib, deleting existing content"
    rm -r -f $1/ros_lib
else
    echo "Cannot find existing $1/ros_lib"
    mkdir $1/ros_lib
fi

echo "Copying new headers in $1/ros_lib"
cp -R ros_lib $1/ros_lib

echo "Done"

