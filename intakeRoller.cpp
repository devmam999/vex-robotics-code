#include "main.h"

//set the intake and control
void setIntake(int theIntakePower) {
    intake = theIntakePower;
}

void setRoller(int theRollerPower) {
    roller = theRollerPower;
}
 
//intake and control functions 
int intakePower = 0;
bool intakeOn = false;
void setIntakeMotor() {
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
int rollerPower = 0;
void setRollerMotor() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) 
        rollerPower = 127;
    else {
        rollerPower = 0;
    }
    setRoller(rollerPower);
}
