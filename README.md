# CarND-Controls-PID
My Solution to the project of the Self-Driving Car Engineer Nanodegree Program

# Code structure

The code follows the lessons closely. Implementation of PID is in pid.cpp and the relevant
methods are invoked in main.cpp

# Reflection

Relevant parameters are P and D. Increasing I actually resulted in worse driving behavior, which was interesting
to see.

I opted not to go for Twiggle, but for manual tuning, to get a more intuitive feel for the parameter effects.
I chose the manual tuning recipe from https://en.wikipedia.org/wiki/PID_controller

1. First, try to find a P value where oscillation starts, than reduce that
2. Then increase the I value. Even small values of I resulted in erratic behavior, so I was ignored
3. Then increase the D value.

This resulted in PID values [0.14,0.0,2.3]

# Simulation

The car drives through the track without errors. A video of the test drive is in the videos subdirectory.

