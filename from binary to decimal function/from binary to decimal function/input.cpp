#include <iostream>
#include "input.h"
#include "check.h"

std::string getBin()
{
	std::string binaryNum;
	std::cout << "Enter a binary number to convert it to decimal\n";
	std::cin >> binaryNum;
	checkInput(binaryNum);
	return binaryNum;
}
