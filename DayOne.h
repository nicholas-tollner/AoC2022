#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class DayOne
{
public:
	DayOne();
	void input();
	int	 output();
	void processElves();
private:
	std::ifstream is;
	std::string line;
	std::vector<int> food;
	int currentElf = 0;
	int first, second, third = 0;
};

