// Written by Zack Phoenix
// Project Euler Problem #9
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <fstream> // for using files
#include <iostream> // for cout and cin
#include <iomanip> // for formatting
#include <string> // for strings
#include <cstdlib> // for rand, srand, C-string conversions
#include <vector> // for vectors
#include <cctype> // for character functions
#include <cstring> // for C-strings
#include <ctime> // for using time/date functions
#include <algorithm> // for STL algorithms
#include "conio.h" 
using namespace std;

// method prototypes
bool squareRootCheck(int);

int main() // main method start
{
	// local variables
	int a = 1,
		b = 1,
		tempc,
		c;
	bool match = 0;

	while (!match)
	{
		while (a < 500)
		{
			while (b < 500)
			{
				tempc = (a * a) + (b * b);
				if (squareRootCheck(tempc))
				{
					c = sqrt(tempc);
					if (a + b + c == 1000)
					{
						match = 1;
						cout << "Product of triplet, whose sum is equal to 1000: " << a * b * c << "\n";
					} // end if
				} // end if
				b++;
			} // end while
			b = 1;
			a++;
		} // end while
	} // end while


	_getch();
	return 0;
} // main method end

// squareRootCheck method checks to see if number has an integer square root
bool squareRootCheck(int num) // squareRootCheck method start
{
	int square = 1;
	bool match = 0;

	while (square * square <= num)
	{
		if (square * square == num)
		{
			match = 1;
		} // end if
		square++;
	} // end while

	return match;
} // squareRootCheck method end