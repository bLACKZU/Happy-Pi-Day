#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	double epsilon = 1e-7, product = 1.0, denominator = 0.0, prevDenominator = 0.0;
	const double PI = 3.1415926;
	while(fabs((2 * product) - PI) > epsilon)
	{
		prevDenominator = denominator;
		denominator = sqrt(prevDenominator + 2.0);
		product = product * (2 / denominator);
	}
	std::cout << std::setprecision(10) << 2 * product << std::endl;
	std::cout << "Error " << PI - (2 * product) << std::endl;
}	