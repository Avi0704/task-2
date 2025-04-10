# TASK 2

#Components Required:
*microcontroller(arduino uno)
*potentiometer(10k ohm)
*motor driver (MD10C)
*battery
*Motor
*jumper wires

#Procedure
#IN this project , i control a dc motor using the the microcontroller and md10c motor driver (we can use any H bridge motor driver) with the help of 10K ohm potentiometer ,( we can use any pot of suitable resistance), and we connect two extreme leg to +5v and gnd and middle leg to A1 pin of arduino , we take analog input from potentiometer and map it to pwm single -> till (0-513) and map it to ( 0-255) to controll the speed in 1 direction(clockwise) and (513-1023) and map it to  (255-0) in anticlockwise direction . i did use if and else if statement of analog signal and give direction signal accordingly and pwm according to analog values of potentiometer  .  
