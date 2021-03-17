// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once


#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <photonlib/PhotonCamera.h>
#include <frc/XboxController.h>


class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:
  photonlib::PhotonCamera m_camera{"raspiCam"};
  frc::XboxController m_driverController{0};
};
