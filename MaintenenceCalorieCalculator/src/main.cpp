#include "inputFunctions/inputFunctions.h"
#include <string>
#include <iostream>

int main()
{
	std::string name{};
	name = getName();

	int goal{};
	goal = getGoal(name);

	double height{};
	double weight{};
	height = getHeight();
	weight = getWeight();

	return 0;
}