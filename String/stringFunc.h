#ifndef STRING_H
#define STRING_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
class stringFunc
{
  public:
  //@isStringDigit()
  //@Param: std::string str
  //@Descriptions: This function checks whether str are all digits
  //@Return: True -> str are all digits.
  //         False-> str are not all digits.
  bool isStringDigit(std::string str);

  //@isStringAlphabets()
  //@Param: std::string str
  //@Descriptions: This function checks whether str are all alphabets
  //@Return: True -> str are all alphabets
  //         False-> str are not all alphabets
  bool isStringAlphabets(std::string str);

  //@isSubString()
  //@Param: std::string original, std::string subString
  //@Descriptions: This function checks whether subString exists within original
  //@Return: True -> subString exists in original
  //         False -> subString does not exist in original
  bool isSubString(std::string original, std::string subString);
};
#endif

