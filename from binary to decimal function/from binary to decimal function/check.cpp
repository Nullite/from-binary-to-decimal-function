#include <iostream>
#include "check.h"

void checkInput(std::string binary)
{
	for (int i = 0; i < binary.length(); i++)
	{
		!(binary[i] == '0' || binary[i] == '1') ? throw - 1 : binary[i] = binary[i];
	}
}
