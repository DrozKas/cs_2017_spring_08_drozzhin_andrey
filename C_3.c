#include <stdio.h>


int main()
{
	
	float a, b, x, z, d, k;
	printf("Insert the resistance (a, x - real, b, z - imaginable): ");
	scanf("%f %f %f %f ", &a, &b, &x, &z);
	d = (a*a*x + a*x*x + a*z*z + b*b*x) / ((a + x)*(a + x) + (b + z)*(b + z));
	k = (a*a*z + b*b*z + b*x*x + b*z*z) / ((a + x)*(a + x) + (b + z)*(b + z));
	printf("Equal resistance: %.4f+%.4fi", d, k);
	
	return 0;
}
