#include "MoveUntilWall.h"
#include "Subsystems/DriveTrain.h"

MoveUntilWall::MoveUntilWall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void MoveUntilWall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveUntilWall::Execute()
{
	driveMotor::SetSpeed(0.4);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUntilWall::IsFinished()
{
	if(dist<5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Called once after isFinished returns true
void MoveUntilWall::End()
{
	driveMotor::Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUntilWall::Interrupted()
{

}
