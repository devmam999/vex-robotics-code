#include "main.h"

//Drivetrain ports
pros::Motor driveLeft1(13, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeft2(15, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeft3(16, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group driveLeft({driveLeft1, driveLeft2, driveLeft3});
pros::Motor driveRight1(5, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRight2(6, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRight3(10, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group driveRight({driveRight1, driveRight2, driveRight3});
//Intake and roller port
pros::Motor rollerIntake(9, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
//Catapult port
pros::Motor catapult(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
//Limit switch
pros::ADIDigitalIn limitSwitch('H');

//Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);


