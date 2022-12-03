#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

class Comparator {
public:
	Comparator()
	{

	}

	int Compare(std::string a, std::string b)
	{
		std::cout << "Ending needed: " << ending[b] << std::endl;
		
		//Append outcome to sum by appending ending to a
		sum += outcomes[a + ending[b]];

		return sum;
	}

private:
	int sum = 0;
	std::map<std::string, std::string> rps{ {"A", "Rock"}, {"B", "Paper"}, {"C", "Scissors"}, {"X", "Rock"}, {"Y", "Paper"}, {"Z", "Scissors"} };
	std::map<std::string, int> outcomes{ {"AD", 4}, {"AW", 8}, {"AL", 3}, {"BL", 1}, {"BD", 5}, {"BW", 9}, {"CW", 7}, {"CL", 2}, {"CD", 6} };
	std::map<std::string, std::string> ending{ {"X", "L"}, {"Y", "D"}, {"Z", "W"}};		// L lose, D draw, W win	
};

class DayTwo
{
public:
	DayTwo();
	void input();
	void output();
private:
	std::ifstream is;
	std::string line;
	std::vector<std::string> lines;
	Comparator comparator;
};