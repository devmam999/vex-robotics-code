#include "main.h"

//Helper Functions
void setDrive(int left, int right) {
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

//Driver Control Functions (Don't need for now)
/*void setDriveMotors() {
    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    if (abs(leftJoystick < 5)) 
        leftJoystick = 0;
    if (abs(rightJoystick < 5)) 
        rightJoystick = 0;
    setDrive(leftJoystick, rightJoystick);
}*/

//Arcade Control Functions
void setDriveArcade() {
    int turn = controller.get_analog(ANALOG_RIGHT_X);
    int drive = controller.get_analog(ANALOG_LEFT_Y);
    if (abs(turn) < 5)
        turn = 0;
    if (abs(drive) < 5)
        drive = 0;
    int left = drive + turn;
    int right = drive - turn;
    setDrive(left, right);
}
