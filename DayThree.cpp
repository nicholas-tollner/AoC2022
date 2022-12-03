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
	int count = 1;
	auto it = lines.begin();
	while (it != lines.end())
	{
		std::cout << "\n --- Group: " << count << " --- " << std::endl;
		std::set<int> chars1;
		std::set<int> chars2;

		int result = process(*it, *(it+1), *(it+2), chars1, chars2);
		std::cout << ", priority: " << result << std::endl;
		totalSum += result;

		count++;
		it += 3;
	}
	return totalSum;
}

int DayThree::process(std::string r1, std::string r2, std::string r3, std::set<int>& chars1, std::set<int> &chars2)
{
	int tmp;

	for (auto c : r1)
	{
		//std::cout << "Char: " << c << std::endl;
		if (std::isupper(c))
		{
			tmp = (c - upperDiff);
		}
		else
		{
			tmp = (c - lowerDiff);
		}
		chars1.insert(tmp);
	}
	
	for (auto c : r2)
	{
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
		
		auto it = chars1.begin();

		while (it != chars1.end())
		{
			if (tmp == *it)
			{
				chars2.insert(tmp);
			}
			it++;
		}
	}
	
	for (auto c : r3)
	{
		//std::cout << "Char: " << c << std::endl;
		
		if (std::isupper(c))
		{
			tmp = (c - upperDiff);
		}
		else
		{
			tmp = (c - lowerDiff);
		}

		auto it = chars2.begin();

		while (it != chars2.end())
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
