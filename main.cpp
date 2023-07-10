#include "String/stringFunc.h"
int main()
{
  stringFunc* str = new stringFunc();
  if(str->isStringDigit("1234567"))
    std::cout << "Yes\n";
  return 1;
}
