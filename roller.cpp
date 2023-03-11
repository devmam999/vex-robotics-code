#include "main.h"

//set rollers
void setRoller(int power) {
    roller = power;
}

//set roller control
int rollerPower = 0;
bool rollerOn = false;
void setRollerMotors() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2)) {
        rollerOn = !rollerOn;
        if (rollerOn) 
            rollerPower = 127;
        else {
            rollerPower = 0;
        }
            
    }
    setRoller(rollerPower);
}