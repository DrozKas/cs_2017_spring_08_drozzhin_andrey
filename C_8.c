#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, D, x1, x2;
	printf("Insert coefficients of the equation: ");
	scanf("%f %f %f", &a, &b, &c);
	D = b*b - 4 * a * c;
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("x1 = %f\nx2 = %f", x1, x2);
	}
	else if (D == 0)
	{
		x1 = x2 = -b / (2 * a);
		printf("x1 = x2 = %f", x1);
	}
	else
	{
		printf("No real answers");
	}
	return 0;
}
