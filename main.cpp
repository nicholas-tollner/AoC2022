#include <iostream>
#include "DayOne.h"
#include "DayTwo.h"

int main()
{
	std::cout << "Starting Application .. " << std::endl;

	DayOne dayOne;
	DayTwo dayTwo;

	// std::cout << dayOne.output() << std::endl;
	dayTwo.output();

	std::cout << "Program done! .. " << std::endl;

	if (std::cin.get())
	{
		return 0;
	}
}
