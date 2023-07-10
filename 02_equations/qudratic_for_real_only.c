#include <stdio.h>
#include <math.h>


/*  
	Arman Dindar Safa	
*/

int main()
{
	double a, b, c, x1, x2;
	// read coefficients of x^2, x and constant
	// ax^2 + bx + c
	printf("Enter coefficients ( divided by space )\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (pow(b, 2) < 4*a*c)
	{
		printf("No real roots\n");
	}
	else
	{
		// real root
		x1 = ( -b + sqrt(pow(b, 2) - (4 * a * c))) / ( 2 * a );
		x2 = ( -b - sqrt(pow(b, 2) - (4 * a * c))) / ( 2 * a );
		printf("Roots are: \n");
		printf("First Root: %lf\nSecond Root: %lf\n", x1 , x2);
	}

	return 0;

}
