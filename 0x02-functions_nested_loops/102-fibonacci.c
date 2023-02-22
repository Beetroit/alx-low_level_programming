#include <stdio.h>
int main()
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	int n = 50;
	unsigned long long int tmp;

	while (n > 0)
	{
		printf("%llu", a);
		tmp = a;
		if (n > 1)
		{
			printf(", ");
		}
		a = b;
		b = a + tmp;
		n--;
	}
	printf("\n");
	return (0);
}