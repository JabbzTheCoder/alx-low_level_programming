#!/bin/bash

# Check if the /proc/sys/kernel/pid_max file exists
if [ -e /proc/sys/kernel/pid_max ]; then
    # Read and print the maximum PID value
    max_pid=$(cat /proc/sys/kernel/pid_max)
    echo "Maximum PID value: $max_pid"
else
    echo "Error: /proc/sys/kernel/pid_max not found. This system may not expose the maximum PID value."
fi
