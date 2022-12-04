#include "DayFour.h"

DayFour::DayFour()
{
	input();
}

void DayFour::input()
{
	is.open("DayFour.txt");

	while (getline(is, line, '\n'))
	{
		lines.push_back(line);
	}
}

int DayFour::output()
{
	return process();
}


int DayFour::process()
{
	size_t vecSize = lines.size();

	for (int i = 0; i < vecSize; i++)
	{
		std::cout << "Processing line: " << lines[i] << std::endl;
		lines[i] += '\n';

		// Get each string and cast to int
		std::string first = "";
		std::string second = "";
		std::string third = "";
		std::string fourth = "";

		auto it = lines[i].begin();

		while (*it != '-')
		{
			first += *it;
			it++;
		}

		it++;

		while (*it != ',')
		{
			second += *it;
			it++;
		}

		it++;

		while (*it != '-')
		{
			third += *it;
			it++;
		}

		it++;

		while (*it != '\n')
		{
			fourth += *it;
			it++;
		}

		containedPairs += compare(stoi(first), stoi(second), stoi(third), stoi(fourth));
		it++;
	}
	return containedPairs;
}

bool DayFour::compare(int a, int b, int c, int d)
{
	//range is fully contained if a >= c && b <=d || c >= a && d <= b
	if (a >= c && b <= d)
	{
		std::cout << "[" << a << ", " << b << "] is fully contained within [" << c << ", " << d << "]" << std::endl;
		return true;
	} 
	else if (c >= a && d <= b)
	{
		std::cout << "[" << c << ", " << d << "] is fully contained within [" << a << ", " << b << "]" << std::endl;
		return true;
	}
	return false;
}
