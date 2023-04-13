#include "main.h"

void moveRobot(int inches) {
	driveLeft.move_relative(inches * (540/13) * (1/M_PI), 600);
	driveRight.move_relative(inches * (540/13) * (1/M_PI), 600);
}
