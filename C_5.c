#include <stdio.h>

int main()
{
	float C, F, T1, T2, T;
	printf("Set the diapasone of temperatures T1, T2, and step T: ");
	scanf("%f-%f %f", &T1, &T2, &T);
	C = T1;
	do
	{
		F = (1.8*C) + 32;
		printf("%f\t %f\n", C, F);
		C = C + T;
	} while (C <= T2);

	return 0;
}
