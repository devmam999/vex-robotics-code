#include "main.h"

void moveRobot(int inches) {
	driveLeft.move_relative(inches, 600);
	driveRight.move_relative(inches, 600);
}