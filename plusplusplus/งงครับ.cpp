#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, c = 0, d = 0;
	printf("Enter Number : ");
	scanf("%d", &a);
	while (a >= 10)
	{
		c += a % 10;
		a = (a - (a % 10)) / 10;
	}
	c = c + a;
	printf("%d\n", c);

	if (c > 10)
	{
		d += c % 10;
		c = (c - (d)) / 10;
		c = c + d;
		printf("%d ", c);
	}

	return 0;
}