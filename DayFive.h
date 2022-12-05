#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <string>

class DayFive
{
public:
	DayFive();
	void input();
	std::string output();
	void process(int pos, int target, int num);
private:
	std::ifstream is;
	std::vector <std::deque<char>> position{10};
	std::vector<std::string> crates;
	std::vector<std::string> lines;
	std::string line;
};
