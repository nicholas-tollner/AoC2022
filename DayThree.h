#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <set>

class DayThree 
{
public:
	DayThree();
	void input();
	int output();
	int process(std::string comp1, std::string comp2, std::set<int> &chars);

private:
	std::ifstream is;
	std::string line;
	std::vector<std::string> lines;
	int lowerDiff = 96;
	int upperDiff = 38;
};
