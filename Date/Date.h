#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class Date
{
  //@getCurrentDate()
  //@Descriptions: Use localtime_s() to get the current date (DD-MM-YYYY)
  //@Return: The date in type string
  std::string getCurrentDate();
};
#endif
