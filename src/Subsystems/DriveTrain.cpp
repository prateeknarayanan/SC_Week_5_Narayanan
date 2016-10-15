#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{

}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
double getUltra()
{
	return ultrasonicSensor::getRangeInches();
	}

// Put methods for controlling this subsystem
// here. Call these from Commands.
