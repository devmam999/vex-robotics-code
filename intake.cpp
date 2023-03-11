#include "main.h"

//set the intake
void setIntake(int power) {
    intake = power;
}

//get the intake controlled
void setIntakeMotors() {
    int intakePower = 0;
    int numPressed = 0;
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) {
        numPressed += 1;
        if (numPressed % 2 == 1)
            intakePower = 127;
        else if (numPressed % 2 == 0)
            intakePower = 0;
    }
    setIntake(intakePower);
}
