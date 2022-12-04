#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class DayFour
{
public:
	DayFour();
	void input();
	int output();
	int process();
	bool compare(int a, int b, int c, int d);
private:
	std::ifstream is;
	std::vector<std::string> lines;
	std::string line;
	int containedPairs = 0;
};