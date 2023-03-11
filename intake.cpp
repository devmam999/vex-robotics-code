#include "main.h"

//set the intake
void setIntake(int power) {
    intake = power;
}

//get the intake controlled
bool intakeOn = false;
void setIntakeMotors() {
    int intakePower = 0;
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) {
        intakeOn = !intakeOn;
        if (intakeOn) 
            intakePower = 127;
        else {
            intakePower = 0;
        }
    }
    setIntake(intakePower);
}
