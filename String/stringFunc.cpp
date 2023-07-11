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

bool stringFunc::isSubString(std::string original, std::string subString)
{
 if(original.find(subString) != std::string::npos)
    return true;
 return false;
}

