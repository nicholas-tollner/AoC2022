#include "DayThree.h"

DayThree::DayThree()
{
	input();
};

void DayThree::input()
{
	is.open("DayThree.txt");
	while (getline(is, line, '\n'))
	{
		lines.push_back(line);
	}
}

int DayThree::output()
{
	int totalSum = 0;
	for (std::string line : lines)
	{
		std::set<int> chars;
		size_t mid = (line.size()) / 2;
		std::string compOne = line.substr(0, mid);
		std::string compTwo = line.substr(mid, std::string::npos);

		std::cout << "--- Processing ---" << std::endl;
		int result = process(compOne, compTwo, chars);
		std::cout << ", priority: " << result << std::endl;
		totalSum += result;
	}
	return totalSum;
}

int DayThree::process(std::string comp1, std::string comp2, std::set<int>& chars)
{
	size_t setSize;
	int tmp;

	//std::cout << " --- Compartment One ---" << std::endl;
	for (auto c : comp1)
	{
		setSize = chars.size();
		//std::cout << "Char: " << c << std::endl;
		if (std::isupper(c))
		{
			tmp = (c - upperDiff);
		}
		else
		{
			tmp = (c - lowerDiff);
		}
		chars.insert(tmp);
	}
	
	//std::cout << " --- Compartment Two ---" << std::endl;
	for (auto c : comp2)
	{
		setSize = chars.size();
		//std::cout << "Char: " << c << std::endl;
		
		if (std::isupper(c))
		{
			tmp = (c - upperDiff);
		}
		else
		{
			tmp = (c - lowerDiff);
		}

		//std::cout << "Searching ... " << std::endl;
		
		auto it = chars.begin();

		while (it != chars.end())
		{
			if (tmp == *it)
			{
				std::cout << "Success: " << c;
				return tmp;
			}
			it++;
		}
	}
	return 0;
}
