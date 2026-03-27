#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	/*int a = 1, b = 1;
	while (a <= 3) 
	{
		b = 1;
			while (b <= 3)
			{
				printf("%d %d\n", a, b);
				b++;
			}
			a++;

	}*/
	int a, b;
	for (a = 1; a < 4; a++)
	{
		for (b = 1; b < 4; b++)
			printf("%d %d\n", a, b);
	}



	return 0;
}