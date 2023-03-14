#include "main.h"

//setup of Catapult
void setCatapult(int power) {
    catapult = power;
}

int catapultPower = 0;
bool catapultOn = false;
void setCatapultMotor() {
    if (pros::c::adi_digital_read(limitSwitch)) {
        catapultOn = !catapultOn;
        if (catapultOn) {
            catapultPower = 127;
        }
        else {
            catapultPower = 0;
        }
    }
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        if (!pros::c::adi_digital_read(limitSwitch))
            catapultPower = 0;
        else {
            catapultPower = 127;
        }
    }
    setCatapult(catapultPower);
}
