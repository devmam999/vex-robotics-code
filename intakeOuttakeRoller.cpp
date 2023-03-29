#include "main.h"

//set the intake and control as well as outtake
void setRollerIntake(int theRollerIntakePower) {
    rollerIntake = theRollerIntakePower;
}

int rollerIntakePower = 0;
bool rollerIntakeOn = false;

//intake and roller functions
void setRollerIntakeMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) 
        rollerIntakeOn = !rollerIntakeOn;
    if (rollerIntakeOn && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
            rollerIntakePower = -127;
        }
        else {
            rollerIntakePower = 127;
        }
    }
    else if (!rollerIntakeOn && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        rollerIntakePower = 0;
    }
    if (!rollerIntakeOn) {
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) 
            rollerIntakePower = 127;
        else {
            rollerIntakePower = 0;
        }
    }
    setRollerIntake(rollerIntakePower);
}

