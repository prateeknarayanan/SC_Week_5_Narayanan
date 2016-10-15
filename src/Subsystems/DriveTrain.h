#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Jaguar* driveMotor;
	Ultrasonic* ultrasonicSensor;
public:
	DriveTrain();
	void InitDefaultCommand();
	double getUltra();

};

#endif
