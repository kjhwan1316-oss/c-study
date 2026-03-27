#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	int a, c;
	int b = 1;
	printf("출력하고 싶은 단은 무엇인가요?: ");
	scanf("%d", &a);
	while (b <= 9)
	{
		c = a * b;
		printf("%d * %d = %d\t", a, b, c);
		b++;
	}



}