#include "main.h"

//set the intake and control as well as outtake
void setIntake(int theIntakePower) {
    intake = theIntakePower;
}

void setOuttake(int theOuttakePower) {
    outtake = theOuttakePower;
}

void setRoller(int theRollerPower) {
    roller = theRollerPower;
}
 
//intake and control functions 
int intakePower = 0;
bool intakeOn = false;
int outtakePower = 0;
void setIntakeMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
        intakeOn = !intakeOn;
        if (intakeOn) {
            intakePower = 127;
        }
        else {
            intakePower = 0;
        }     
    }
    setIntake(intakePower);
}
void setOuttakeMotor() {
    if (intakeOn) {
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
            outtakePower = 127;
        else {
            outtakePower = 0;
        }
    }
    else {
        outtakePower = 0;
    }
    setOuttake(outtakePower);
}
int rollerPower = 0;
void setRollerMotor() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) 
        rollerPower = 127;
    else {
        rollerPower = 0;
    }
    setRoller(rollerPower);
}
