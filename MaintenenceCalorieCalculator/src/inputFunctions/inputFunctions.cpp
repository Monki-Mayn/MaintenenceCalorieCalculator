#include <iostream>
#include <string>
#include "inputFunctions.h"

int getSex()
{
	int sex{};
	while (true) {
		std::cout << "\nWhat is your sex?\n[1]Female\n[2]Male\n";
		std::cin >> sex;

		if (sex < 1 || sex > 2)
			std::cout << "Please only enter 1 or 2.\n";
		else
			return sex;

	}
}

std::string getName()
{
	std::string name{};
	while (true) {
		std::cout << "Please enter your name\n";
		std::cin >> name;

		std::cout << '\n' << name << "\nIs this correct?\nY\nN\n";
		char isCorrect{};
		std::cin >> isCorrect;
		if (isCorrect == 'Y' || isCorrect == 'y') {
			std::cout << "\nGreat! It's nice to meet you, " << name << "!\n\n";
			break;
		}
		else if (isCorrect == 'N' || isCorrect == 'n')
			std::cout << "\nThen let's try again, shall we?\n";
		else
			std::cout << "\nPlease press Y for yes and N for no.\nNow, ";
	}

	return name;
}

int getAge()
{
	int age{};
	std::cout << "\nHow old are you?\n";
	std::cin >> age;

	return age;
}

int getActivityLevel()
{
	int activitylevel{};
	std::cout
		<< "What is you activity level?\n"
		<< "[1]Sedentary: Little to no excercise, office job\n"
		<< "[2]Lightly Active: Light daily activity & exercise 1-3 days per week\n"
		<< "[3]Moderately Active: Moderate daily activity & exercise 3-5 days per week\n"
		<< "[4]Very Active: Physically demanding lifestyle & exercise 6-7 days per week\n"
		<< "[5]Extremely Active: Hard daily exercise/sports & physical job\n";
		std::cin >> activitylevel;

		return activitylevel;
}

double getHeight()
{
	double height{};
	std::cout
		<< "Next we'll ask about your height and weight.\n"
		<< "This is so we can caluclate how many calories you should be consuming\n"
		<< "in order to meet your goals.\n\n";

	std::cout << "How tall are you? (In cm)\n";
	std::cin >> height;

	return height;
}

double getWeight()
{
	double weight{};
	std::cout << "How much do you weigh? (In kilos)\n";
	std::cin >> weight;

	return weight;
}
