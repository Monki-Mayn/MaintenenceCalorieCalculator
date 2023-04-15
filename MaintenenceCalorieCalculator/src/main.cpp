#include "inputFunctions/inputFunctions.h"
#include "PrintFunctions/information.h"
#include <string>
#include <iostream>

int main()
{
	std::cout << "Welcome to calorific. Before we get started, tell me a little about yourself.\n";
	int sex{};
	sex = getSex();

	std::string name{};
	name = getName();

	int age{};
	age = getAge();

	double height{};
	double weight{};
	height = getHeight();
	weight = getWeight();

	int activityLevel{};
	activityLevel = getActivityLevel();

	printInformation();

	return 0;
}