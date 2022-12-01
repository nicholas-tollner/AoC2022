#include <iostream>
#include "DayOne.h"
#include "DayTwo.h"

int main()
{
	std::cout << "Starting Application .. " << std::endl;

	DayOne day1;

	std::cout << day1.output() << std::endl;

	if (std::cin.get())
	{
		return 0;
	}
}
