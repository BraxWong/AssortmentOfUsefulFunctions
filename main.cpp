#include "File/File.h"
int main()
{
  File *file = new File();
  file->sayHi();
  delete file;
  return 0;
}
