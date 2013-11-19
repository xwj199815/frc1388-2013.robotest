// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::drivetrainfrontrightmotor = NULL;
CANJaguar* RobotMap::drivetrainfrontleftmotor = NULL;
CANJaguar* RobotMap::drivetrainbackleftmotor = NULL;
CANJaguar* RobotMap::drivetrainbackrightmotor = NULL;
RobotDrive* RobotMap::drivetrainRobotDrive41 = NULL;
Gyro* RobotMap::drivetrainGyro = NULL;
Relay* RobotMap::lightsBluespike = NULL;
Relay* RobotMap::lightsWhitespike = NULL;
Relay* RobotMap::lightsRedspike = NULL;
SpeedController* RobotMap::fingersVictor4 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	drivetrainfrontrightmotor = new CANJaguar(4);
	
	
	drivetrainfrontleftmotor = new CANJaguar(5);
	
	
	drivetrainbackleftmotor = new CANJaguar(6);
	
	
	drivetrainbackrightmotor = new CANJaguar(2);
	
	
	drivetrainRobotDrive41 = new RobotDrive(drivetrainfrontleftmotor, drivetrainbackleftmotor,
              drivetrainfrontrightmotor, drivetrainbackrightmotor);
	
	drivetrainRobotDrive41->SetSafetyEnabled(true);
        drivetrainRobotDrive41->SetExpiration(0.1);
        drivetrainRobotDrive41->SetSensitivity(0.5);
        drivetrainRobotDrive41->SetMaxOutput(1.0);
	drivetrainGyro = new Gyro(1, 1);
	lw->AddSensor("Drive train", "Gyro", drivetrainGyro);
	drivetrainGyro->SetSensitivity(0.007);
	lightsBluespike = new Relay(1, 3);
	lw->AddActuator("Lights", "Bluespike", lightsBluespike);
	
	lightsWhitespike = new Relay(1, 2);
	lw->AddActuator("Lights", "Whitespike", lightsWhitespike);
	
	lightsRedspike = new Relay(1, 1);
	lw->AddActuator("Lights", "Redspike", lightsRedspike);
	
	fingersVictor4 = new Victor(1, 4);
	lw->AddActuator("Fingers", "Victor 4", (Victor*) fingersVictor4);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
