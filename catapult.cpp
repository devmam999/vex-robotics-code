#include "main.h"

//setup of Catapult
void setCatapult(int power) {
    catapult = power;
}

int catapultPower = 0;
bool catapultOn = false;
void setCatapultMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_MASTER)) {
        catapultOn = !catapultOn
        if (catapultOn) 
            catapultPower = 127;
        else {
            catapultPower = 0;
        }
    }
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        if (controller.get_digital(pros::E_CONTROLLER_MASTER))
            catapultPower = 127;
        else {
            cataputPower = 0;
        }
    }
    setCatapult(catapultPower);
}