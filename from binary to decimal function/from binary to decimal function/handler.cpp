#include <iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>

int convertToDecimal(std::string binary)
{
	int n = binary.length();
	int sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (binary[i] == '1') sum += pow(2, n - (i + 1));
	}
	return sum;
		
}
