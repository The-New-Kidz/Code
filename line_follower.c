/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                      - EV3 Line Follower Tank -                                        *|
|*                                            ROBOTC on EV3                                               *|
|*                                                                                                        *|
|*  This program allows a robot to follow a black line.  This particular method uses "Tank Drive" where   *|
|*  each side is controlled individually like a tank.  You may need to play with the light threshold      *|
|*  value to get it just right.                                                                           *|
|*                                                                                                        *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:                                                                                              *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port B                  motorB              EV3                 Right motor                         *|
|*    Port C                  motorC              EV3                 Left motor                          *|
|*    Port 1                  color_sensor        EV3                 color sensor                        *|
\*---------------------------------------------------------------------------------------------------4246-*/


task main()
{
  

  while(true)                            // Infinite loop:
  {
    
      motor[motorB] = joystick.joy1_y2;         // Motor B is assigned a power level equal to the right analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorB] = 0;                        // Motor B is stopped with a power level of 0.
    }


    if(abs(joystick.joy1_y1) > threshold)   // If the left analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[motorC] = joystick.joy1_y1;         // Motor C is assigned a power level equal to the left analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorC] = 0;                        // Motor C is stopped with a power level of 0.
    }

     if(joy1Btn(7) == 1)
 {
 motor(motorA) = 44;
 }
 else if(joy1Btn(8) == 1)
 {
 motor(motorA) = -44;
 }
 else
 {
 motor(motorA) =0;


 }}
}
