#pragma once

#include <mc_rbdyn/RobotModuleMacros.h>
#include <mc_rtc/logging.h>
#include <mc_rbdyn/RobotModule.h>
#include <mc_robots/api.h>

namespace mc_robots
{

struct MC_ROBOTS_DLLAPI UR3eRobotModule : public mc_rbdyn::RobotModule
{
  UR3eRobotModule();
};

} // namespace mc_robots

extern "C"
{
  ROBOT_MODULE_API void MC_RTC_ROBOT_MODULE(std::vector<std::string> & names)
  {
    names = {"UR3e"};
  }
  ROBOT_MODULE_API void destroy(mc_rbdyn::RobotModule * ptr)
  {
    delete ptr;
  }
  ROBOT_MODULE_API mc_rbdyn::RobotModule * create(const std::string & n)
  {
    ROBOT_MODULE_CHECK_VERSION("UR3e")
    if(n == "UR3e")
    {
      return new mc_robots::UR3eRobotModule();
    }
    else
    {
      mc_rtc::log::error("UR3e module Cannot create an object of type {}", n);
      return nullptr;
    }
  }
}
