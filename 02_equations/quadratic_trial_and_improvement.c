#include <stdio.h>
#include <math.h>


/*  
	Arman Dindar Safa
	code to solve quadratic eqn
	using trial and improvement 	
	solving x^2 - x8 - 13 in this case
*/

int main()
{
	float p1, p2, constval, lower, upper;

	double testhigh, testlow, testval, middle;
	int i, iterations;
	// keep in mind, curve has to cross x-axis.
	// upper val == val of x where curve is above x-axis
	// lower val == val of x where curve is below x-axis
	// both vals should be close to where curve crosses x-axis
	printf("Enter initial lower value: \n");
	scanf("%f", &lower);
	
	printf("Enter initial upper value: \n");
	scanf("%f", &upper);
	
	printf("Enter number of iterations: \n");
	scanf("%d", &iterations);

	// preset constant vals
	// p2 == coeff of x^2
	// p1 == coeff of x
	// constval == coeff of x^0 
	p2 = 1; 
	p1 = -8;
	constval = -13;

	testlow = lower;
	testhigh = upper;
	printf("Equation is: -%fx**2 %f x %f = 0\n", p2, p1, constval);

	for ( i = 0 ; i < iterations; i++)
	{
		middle = ( testhigh + testlow ) / 2;
		testval = pow(middle, 2) - 8 * middle - 13;

		if (testval == 0)
		{
			printf("x is %f", middle);
		}
		else if ( testval > 0 )
		{
			// replacing upper val with this one
			testhigh = middle; 
		}
		else
		{
			// replcing lower val with this one
			testlow = middle;
		}
	printf("x is %f\n", middle);

	}
	return 0;
}	