#include <stdio.h>

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%i", &a);
	if (a == 0)
	{
		printf("0!= 1");
		_getch();
		return 0;
	}
	else if (a < 0)
	{
		printf("Error.");
		_getch();
		return 0;
	}
	else
	{
		int b = 1;
		while (a >= 1)
		{
			b *= a;
			a--;
		}
		printf("%a !: %i", b);
	}
	return 0;
}
