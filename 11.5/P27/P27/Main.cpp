#include <stdio.h>
#include <stdlib.h>

long factorial(long a);

int main()
{
	long i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %ld\n",i,factorial(i));
	}
	system("pause");
	return 0;
}

long factorial(long a)
{
	if (a <= 1)
	{
		return 1;
	}
	else
	{
		return(a * factorial(a-1));
	}
}