#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, x1, x2, xr1, xr2, xi1, xi2;
	// read coefficients of x^2, x and constant
	// ax^2 + bx + c
	printf("Enter coefficients ( divided by space) \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (pow(b, 2) < 4*a*c)
	{
		// switch b^2 and 4ac to find positive root
		// then add i to the answer
		printf("Complex Root\n");
		xr1 = -b / (2 * a);
		xi1 = sqrt((4 * a * c) - (pow(b, 2))) / (2 * a);

		xr2 = xr1;
		xi2 = -sqrt((4 * a * c) - (pow(b, 2))) / (2 * a);

		printf("Roots are:\n");
		printf("First Root: %lf + %lfi\n", xr1, xi1);
		printf("Second Root: %lf + %lfi\n", xr2, xi2);
	}
	else
	{
		// real root
		x1 = ( -b + sqrt(pow(b, 2) - (4 * a * c))) / ( 2 * a );
		x2 = ( -b - sqrt(pow(b, 2) - (4 * a * c))) / ( 2 * a );
	
		printf("Roots: %lf , %lf", x1 , x2);
	}

	return 0;

}
