#include <iostream>
#include "DayOne.h"
#include "DayTwo.h"
#include "DayThree.h"
#include "DayFour.h"
#include "DayFive.h"


int main()
{
	std::cout << "Starting Application .. \n" << std::endl;
	DayFive dayFive;
	std::cout << dayFive.output() << std::endl;

	std::cout << "\nProgram done!" << std::endl;

	if (std::cin.get())
	{
		return 0;
	}
}
