#include "main.h"

//Setting up Catapult motor
bool lsSensorOn = false;
void setCatapultMotorCase1() {
    if (!limitSwitch.get_value()) {
        catapult = 127;
    }
    else if (limitSwitch.get_value() && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        catapult = 0;
    }  
}
void setCatapultMotorCase2() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        while (limitSwitch.get_value()) {
            catapult = 127;
        }
    }
}
