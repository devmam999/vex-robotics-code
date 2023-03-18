#include "main.h"

//setup of Catapult
void setCatapult(int power) {
    catapult = power;
}

//Setting up Catapult motor
int catapultPower = 0;
bool catapultOn = false;
void setCatapultMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        if (limitSwitch.get_value()) 
            catapultPower = 127;
        else {
            catapultPower = 0;
        }
    }
    setCatapult(catapultPower);
}
