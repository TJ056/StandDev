// StandDev.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//read in the values for the sum and mean
	int value1, value2, value3, value4, sum;
	double mean;
	//read in the values for the standard deviation
	int standVal1, standVal2, standVal3, standVal4;
	// read in the integars from the standVals
	int standInt1, standInt2, standInt3, standInt4, standIntsum, standIntquotient;
	// read in final square root for standard deviation
	double standDev;
	

	// read the data and add the numbers together
	std::cout << "Enter 4 integar values: ";
	std::cin >> value1 >> value2 >> value3 >> value4;
	sum = value1 + value2 + value3 + value4;
	std::cout << "The sum is: " << sum;

	// take the average of the sum
	mean = sum / 4;
	std::cout << " The mean of these numbers is: " << mean;

	// finding the standard deviation
	standVal1 = value1 - mean;
	standVal2 = value2 - mean;
	standVal3 = value3 - mean;
	standVal4 = value4 - mean;
	
	// squaring the standVals and adding the squares together
	standInt1 = pow(standVal1, 2);
	standInt2 = pow(standVal2, 2);
	standInt3 = pow(standVal3, 2);
	standInt4 = pow(standVal4, 2);
	standIntsum = standInt1 + standInt2 + standInt3 + standInt4;
	standIntquotient = standIntsum / 3;

	// square root of standIntsum to get Standard Deviation
	standDev = sqrt(standIntquotient);
	std::cout << " The Standard Deviation is: " << standDev;

	

 
	return 0;
}