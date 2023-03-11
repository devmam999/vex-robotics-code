#include "main.h"

//set the intake
void setIntake(int power) {
    intake = power;
}

//get the intake controlled
void setIntakeMotors{
    int intakePower = 0;
    if (controller.get_analog(pros::E_CONTROLLER_DIGITAL_L2)) {
        intakePower = -127;
    }
    else if (controller.get_analog(pros::E_CONTROLLER_DIGITAL_L1)) {
        intakePower = -127;
    }
    setIntake(intakePower);
}