#include "main.h"

void moveRobot(int inches) {
	driveLeft.move_relative(inches * 540 * M_PI_13, 600);
	driveRight.move_relative(inches * 540 * M_PI_13, 600);
}
