#include "Logger.h"

#include <iostream>

#include <termcolor/termcolor.hpp>

void Logger::Log(std::string string)
{
	std::cout << termcolor::reset << string << std::endl;
}
void CyanLogger::Log(std::string string)
{
	std::cout << termcolor::cyan << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void MagentaLogger::Log(std::string string)
{
	std::cout << termcolor::magenta << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void YellowLogger::Log(std::string string)
{
	std::cout << termcolor::yellow << string;
	std::cout << termcolor::reset << "" << std::endl;
}
