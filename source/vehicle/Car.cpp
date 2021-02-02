#include "Car.h"

Car::Car()
    : logger(new Logger())
{
}
void Car::TurnLeft()
{
    logger->LogBlue("Turning left");
    fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
    logger->LogBlue("Turning right");
    fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
    logger->LogBlue("Moving ahead");
    fuelGauge.DecrementFuelLevel();
    fuelGauge.DecrementFuelLevel();
}
