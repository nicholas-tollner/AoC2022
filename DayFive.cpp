#include "DayFive.h"

DayFive::DayFive()
{
	input();
}

void DayFive::input()
{
	is.open("dayFive.txt");

	while (getline(is, line, '\n'))
	{
		// Separate initial positions from movement
		if (line.empty())
		{
			while (getline(is, line, '\n'))
			{
				lines.push_back(line);
			}
		}
		// Don't push last line
		else if (line.find('1') == std::string::npos)
		{
			crates.push_back(line);
		}
	}
}

std::string DayFive::output()
{
	std::cout << " --- Crate Positions ---" << std::endl;
	for (auto s : crates)
	{
		std::cout << s << "\n" << std::endl;
	}

	// Place crates into initial positions within deque
	for (auto s : crates)
	{
		size_t pos;
		std::string tmp;
		// Check positions for crates, 1 = 1, 5 = 2, 9 = 3
		if (s[1] != ' ')
		{
			position[1].push_back(s[1]);
		}
		
		if (s[5] != ' ')
		{
			position[2].push_back(s[5]);
		}
		
		if (s[9] != ' ')
		{
			position[3].push_back(s[9]);
		}

		if (s[13] != ' ')
		{
			position[4].push_back(s[13]);
		}
		
		if (s[17] != ' ')
		{
			position[5].push_back(s[17]);
		}
		
		if (s[21] != ' ')
		{
			position[6].push_back(s[21]);
		}
		
		if (s[25] != ' ')
		{
			position[7].push_back(s[25]);
		}
		
		if (s[29] != ' ')
		{
			position[8].push_back(s[29]);
		}
		
		if (s[33] != ' ')
		{
			position[9].push_back(s[33]);
		}
	}

	/*std::cout << " --- Stack Positions --- " << std::endl;
	int col = 0;
	for (auto s : position)
	{
		std::cout << col << ": ";
		while (!s.empty())
		{
			std::cout << s.front() << ", ";
			s.pop_front();
		}

		std::cout << "\n" << std::endl;
		col++;
	}*/


	std::cout << "--- Lines --- " << std::endl;
	for (auto s : lines)
	{
		std::string tmp = s.substr(5, std::string::npos);
		int num = std::stoi(s.substr(5, tmp.find(' ')));
		process(atoi(&s[12]), atoi(&s[s.size() - 1]), num);
	}

	std::string result = "";
	result += position[1].front();
	result += position[2].front();
	result += position[3].front();
	result += position[4].front();
	result += position[5].front();
	result += position[6].front();
	result += position[7].front();
	result += position[8].front();
	result += position[9].front();
	return result;
}

// Performs operation on the positions deque
void DayFive::process(int pos, int target, int num)
{
	std::cout << "Moving: " << num << " from " << pos << " to " << target;
	for (int i = 0; i < num; i++)
	{
		int crate = position[pos].front();			// Move crate from here
		position[target].push_front(crate);			// To here
		position[pos].pop_front();					// Remove crate from old position

		/*std::cout << " --- Current Positions --- " << std::endl;
		int col = 0;
		for (auto s : position)
		{
			std::cout << col << ": ";
			while (!s.empty())
			{
				std::cout << s.front() << ", ";
				s.pop_front();
			}

			std::cout << "\n" << std::endl;
			col++;
		}*/
	}
	std::cout << " done!" << std::endl;
}
