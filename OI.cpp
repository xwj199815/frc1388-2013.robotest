// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/BOFF.h"
#include "Commands/BON.h"
#include "Commands/Drive.h"
#include "Commands/Gyron.h"
#include "Commands/ROFF.h"
#include "Commands/RON.h"
#include "Commands/WOFF.h"
#include "Commands/WON.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	cCI = new Joystick(3);
	
	bluebuttonoff = new JoystickButton(cCI, 7);
	bluebuttonoff->WhenReleased(new BOFF());
	bluebutton = new JoystickButton(cCI, 7);
	bluebutton->WhenPressed(new BON());
	whitebutton = new JoystickButton(cCI, 8);
	whitebutton->WhenPressed(new WON());
	whitebuttonoff = new JoystickButton(cCI, 8);
	whitebuttonoff->WhenReleased(new WOFF());
	redbuttonoff = new JoystickButton(cCI, 9);
	redbuttonoff->WhenReleased(new ROFF());
	redbutton = new JoystickButton(cCI, 9);
	redbutton->WhenPressed(new RON());
	joystick = new Joystick(1);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("Gyron", new Gyron());
	SmartDashboard::PutData("Drive", new Drive());
	SmartDashboard::PutData("ROFF", new ROFF());
	SmartDashboard::PutData("WON", new WON());
	SmartDashboard::PutData("WOFF", new WOFF());
	SmartDashboard::PutData("RON", new RON());
	SmartDashboard::PutData("BON", new BON());
	SmartDashboard::PutData("BOFF", new BOFF());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getCCI() {
	return cCI;
}
Joystick* OI::getJoystick() {
	return joystick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
bool OI::Getredbutton()
{
	return redbutton;
}
