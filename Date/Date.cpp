#include "Date.h"
#include <time.h>
std::string Date::getCurrentDate()
{
  time_t now = time(0);
  tm ltm;
  localtime_s(&ltm, &now);
  return std::to_string(ltm.tm_mday) + "-" + std::to_string(ltm.tm_mon + 1) + "-" + std::to_string(ltm.tm_year + 1900);
}
