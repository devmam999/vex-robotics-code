#include "main.h"

//set rollers
void setRoller(int power) {
    roller = power;
}

//set roller control
int rollerPower = 0;
void setRollerMotors() {
    if (controller.get_digital_press(pros::E_CONTROLLER_DIGITAL_L2)) 
        rollerPower = 127;
    else {
        rollerPower = 0;
    }
    setRoller(rollerPower);
}
