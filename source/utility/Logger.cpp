#include "Logger.h"

#include <iostream>
#include <termcolor/termcolor.hpp>

void Logger::Log(std::string string)
{
    std::cout << termcolor::reset << string << std::endl;
}
void Logger::LogRed(std::string string)
{
    std::cout << termcolor::red << string << std::endl;
}
void Logger::LogGreen(std::string string)
{
    std::cout << termcolor::green << string << std::endl;
}
void Logger::LogBlue(std::string string)
{
    std::cout << termcolor::blue << string << std::endl;
}
