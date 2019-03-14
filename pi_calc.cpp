#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
	double epsilon = 0.000004, sum = 0.0, i = 0.0, j = 1.0;
	const double PI = 3.1415926;
	while(fabs(sum - PI) > epsilon)
	{
		sum += (pow((-1), i+1.0)*4.0) / j;
		i ++;
		j += 2;
		std::cout << setprecision(10) << " The value of pi is " << sum << std::endl;
		
	}
	std::cout <<  setprecision(10) << " The final value of pi is " << sum << std::endl;
}	