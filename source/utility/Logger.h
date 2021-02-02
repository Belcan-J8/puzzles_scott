#pragma once

#include <string>

struct ILogger
{
    virtual void Log(std::string string) = 0;
};

class IColorLogger : public ILogger
{
public:
    virtual void LogRed(std::string string) = 0;
    virtual void LogGreen(std::string string) = 0;
    virtual void LogBlue(std::string string) = 0;
};

class Logger : public IColorLogger
{
public:
    void Log(std::string string);
    void LogRed(std::string string);
    void LogGreen(std::string string);
    void LogBlue(std::string string);
};
