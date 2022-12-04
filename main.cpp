#include <iostream>
#include "DayOne.h"
#include "DayTwo.h"
#include "DayThree.h"
#include "DayFour.h"

int main()
{
	std::cout << "Starting Application .. \n" << std::endl;

	//DayOne dayOne;
	//DayTwo dayTwo;
	//DayThree dayThree;
	DayFour dayFour;

	//std::cout << "\nTotal Sum: " << result << std::endl;

	std::cout << dayFour.output() << std::endl;

	std::cout << "\nProgram done!" << std::endl;

	if (std::cin.get())
	{
		return 0;
	}
}
