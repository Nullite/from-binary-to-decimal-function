#include <iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include "input.h"
#include "handler.h"

void main()
{
	
	try
	{
		std::cout << convertToDecimal(getBin()) << "\n";
	}
	catch (int exeption)
	{
		if (exeption == -1)
		{
			std::cout << "\x1b[31mError: \x1b[0m" << exeption << "\n\x1b[31mNot a binary number entered\x1b[0m\n";
		}
	}
	

}
