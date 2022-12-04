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
	if (c >= a && c <= b)
	{
		std::cout << "[" << c << ", " << d << "] is partially contained within [" << a << ", " << b << "]" << std::endl;
		return true;
	}
	else if (d <= b && d >= a)
	{
		std::cout << "[" << c << ", " << d << "] is partially contained within [" << a << ", " << b << "]" << std::endl;
		return true;
	}
	else if (a >= c && a <= d)
	{
		std::cout << "[" << a << ", " << b << "] is partially contained within [" << c << ", " << d << "]" << std::endl;
		return true;
	}
	else if (b <= d && b >= c)
	{
		std::cout << "[" << a << ", " << b << "] is partially contained within [" << c << ", " << d << "]" << std::endl;
		return true;
	}

	return false;
}
