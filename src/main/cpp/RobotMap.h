#pragma once

#include <WPILib.h>
#include "AHRS.h"
#include "ctre/phoenix.h"

using namespace frc;

class RobotMap {
public:
	static int SpeedControl;

	static frc::PowerDistributionPanel* pdp;

	static WPI_TalonSRX* driveTrainFrontLeftDrive;
	static WPI_TalonSRX* driveTrainFrontLeftSteer;

	static WPI_TalonSRX* driveTrainFrontRightDrive;
	static WPI_TalonSRX* driveTrainFrontRightSteer;

	static WPI_TalonSRX* driveTrainRearLeftDrive;
	static WPI_TalonSRX* driveTrainRearLeftSteer;

	static WPI_TalonSRX* driveTrainRearRightDrive;
	static WPI_TalonSRX* driveTrainRearRightSteer;

	static frc::I2C* i2c;
	static frc::I2C* lidar;

	static frc::AnalogInput* sonar;

	static WPI_TalonSRX* armMotor;
	static WPI_TalonSRX* elevatorMotor;
	static WPI_TalonSRX* climbingMotor;
	static WPI_TalonSRX* clawMotor;
	static WPI_TalonSRX* rollerMotor;

	static AHRS* imu;

	//static SerialPort* serialPort;
	//static SerialPort* serialPort1;
	//static SerialPort* serialPort2;

	static void Initialize();
};
