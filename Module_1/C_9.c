#include <stdio.h>



void FIBBONACHI(int n,int a,int b)
{
	if (n == 0) return;
	printf("%i ", b);
	int acc = b;
	b += a;
	a = acc;
	n--;
	fib(n, a, b);
}

int main()
{
	int N = 0;
	printf("Enter natural number N: ");
	scanf("%i", &N);
	if (N <= 0)
		printf("Error\n");
	FIBBONACHI(N, 0, 1);
	return 0;
}
