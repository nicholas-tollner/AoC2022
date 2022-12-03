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
	int process(std::string r1, std::string r2, std::string r3, std::set<int> &chars1, std::set<int> &chars2);

private:
	std::ifstream is;
	std::string line;
	std::vector<std::string> lines;
	int lowerDiff = 96;
	int upperDiff = 38;
};
