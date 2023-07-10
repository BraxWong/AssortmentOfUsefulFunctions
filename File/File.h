#ifndef FILE_H
#define FILE_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
class File
{
  public:
    //@get_desktop_path()
    //@Descriptions: It returns the directory path to the user's desktop
    //@Return: The directory path to the user's desktop
    std::string get_desktop_path();

    //@directoryExists()
    //@Param: const char* dirPath
    //@Descriptions: Checks if the dirPath exists within the local machine
    //@Return: True -> The directory exists
    //         False-> The directory does not exist
    bool directoryExists(const char* dirPath);
};

#endif
