#include "stringFunc.h"

bool stringFunc::isStringDigit(std::string str)
{
  for(unsigned int i = 0; i < str.length(); ++i)
  {
    if(!std::isdigit(str[i]))
      return false;
  }
  return true;
}

bool stringFunc::isStringAlphabets(std::string str)
{
  for(unsigned int i = 0; i < str.length(); ++i)
  {
    if(!std::isalpha(str[i]))
      return false;
  }
  return true;
}
