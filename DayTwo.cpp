#include "DayTwo.h"
#include <iostream>

DayTwo::DayTwo()
{
	input();
}

void DayTwo::input()
{
	is.open("DayTwo.txt");

	std::cout << " --- Building Vector --- " << std::endl;
	while (std::getline(is, line, '\n'))
	{
		size_t pos = line.find(' ');
		std::string firstChar = line.substr(0, pos);
		std::string secondChar = line.substr(pos + 1, std::string::npos);

		lines.push_back(firstChar);
		lines.push_back(secondChar);
	}
	std::cout << "Vector size: " << lines.size() << "\n" << std::endl;
}

void DayTwo::output()
{
	std::cout << "--- Output ---" << std::endl;
	auto it = lines.begin();

	while (it != lines.end() && it + 1 != lines.end())
	{
		std::cout << "Current sum: " << comparator.Compare(*it, *(it + 1)) << std::endl;
		it = it + 2;
	}
}