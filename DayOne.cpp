#include "DayOne.h"
#include <iostream>

DayOne::DayOne()
{
	input();
}

void DayOne::input()
{
	is.open("DayOne.txt");

	while (getline(is, line))
	{
		if (line.empty())
		{
			food.push_back(-1);
		}
		else
		{
			food.push_back(stoi(line));
		}
	}
}

int DayOne::output()
{
	for (auto it = food.begin(); it != food.end(); ++it)
	{
		if (*it != -1)
		{
			currentElf += *it;
		}
		else
		{
			processElves();
		}
	}

	processElves();

	std::cout << "first: " << first << std::endl;
	std::cout << "second: " << second << std::endl;
	std::cout << "third: " << third << std::endl;

	return first + second + third;
}

void DayOne::processElves()
{
	if (currentElf > first)
	{
		third = second;
		second = first;
		first = currentElf;
	}
	else if (currentElf > second)
	{
		third = second;
		second = currentElf;
	}
	else if (currentElf > third)
	{
		third = currentElf;
	}

	currentElf = 0;
}
