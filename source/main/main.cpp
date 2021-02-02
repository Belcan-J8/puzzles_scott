#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car_one(new CyanLogger());
	Car car_two(new MagentaLogger());

	car_one.TurnLeft();
	car_two.TurnLeft();
	car_two.TurnRight();
	car_one.TurnRight();
	car_one.Accelerate();
	car_two.Accelerate();

	logger.Log("Exiting application");
}
