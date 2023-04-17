# hailstoneSequence
simple c++ program that will show the hailstone sequence for any positive integer.
The hailstone squence is an interesting algorithm that should always converge on 1.
The way it works is, given an input value, if goes through the following steps:
1. If the number is 1, stop.
2. If the number is even, set the number equal to number/2
3. If the number is odd, set the number equal to (3 * number) + 1
4. Go to step one and repeat

To use this program, navigate to the directory of the program, and compile using the following command:

g++ hailstoneSequence.cpp -o hailstoneSequence.exe

Then to run use the folloing command:

./hailstoneSequence.exe
