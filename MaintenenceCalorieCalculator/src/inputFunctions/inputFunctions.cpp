#include <iostream>
#include <string>
#include "inputFunctions.h"

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

int getGoal(const std::string& name)
{
	int goal{};
	while (true) {
		std::cout
			<< "What are your goals " << name << "?\n"
			<< "1: Gain Weight\n"
			<< "2: Lose Weight\n"
			<< "3: Maintain Weight\n";
		std::cin >> goal;

		if (goal == 1 || goal == 2 || goal == 3) {
			std::cout << "\nGreat! ";
			break;
		}
		else
			std::cout
			<< "Please enter one of the following values:\n"
			<< "[1] if your goal is to gain weight\n"
			<< "[2] if your goal is to lose weight\n"
			<< "[3] if your goal is to maintain weight\n";
	}

	return goal;
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