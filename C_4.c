#include <stdio.h>

#define SWAP(t, x, y) {t=y; y=x; x=t;}

int main()
{
	int a, b, c;
	printf("x = ");
	scanf("%i", &a);
	printf("y = ");
	scanf("%i", &b);
	SWAP(c, a, b);
	printf("\n%i, %i", a, b);
	
	return 0;
}
