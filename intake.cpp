#include "main.h"

//set the intake
void setIntake(int power) {
    intake = power;
}

//get the intake controlled
void setIntakeMotors() {
    int intakePower = 0;
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) {
        intakePower = -127;
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_A)) {
        intakePower = -127;
    }
    setIntake(intakePower);
}
