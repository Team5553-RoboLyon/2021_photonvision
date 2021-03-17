// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
    m_camera.SetLEDMode(photonlib::LEDMode::kBlink);
}

void Robot::RobotPeriodic() {
  if (m_driverController.GetAButtonPressed()){
    m_camera.SetLEDMode(photonlib::LEDMode::kBlink);
    std::cout << "led set to blink" << std::endl;
  }
    if (m_driverController.GetXButtonPressed()){
    m_camera.SetLEDMode(photonlib::LEDMode::kOn);
    std::cout << "led set to on" << std::endl;
  }
    if (m_driverController.GetBButtonPressed()){
    m_camera.SetLEDMode(photonlib::LEDMode::kOff);
    std::cout << "led set to off" << std::endl;
  }
}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
