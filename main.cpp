#include <iostream>
#include "DayOne.h"
#include "DayTwo.h"
#include "DayThree.h"

int main()
{
	std::cout << "Starting Application .. " << std::endl;

	//DayOne dayOne;
	//DayTwo dayTwo;
	DayThree dayThree;

	// std::cout << dayOne.output() << std::endl;
	// dayTwo.output();
	int result = dayThree.output();
	std::cout << "Total Sum: " << result << std::endl;

	std::cout << "Program done! .. " << std::endl;

	if (std::cin.get())
	{
		return 0;
	}
}
