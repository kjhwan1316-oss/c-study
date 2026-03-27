//1~100 합 출력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
/*	int a = 2, b = 0; //a = 1~100, b= 합계 누적할 변수
	while (a <= 100) //a<6 1~5까지 반복
	{
		//printf("%d\n", a);
		b += a;
		a += 2; //a = a + 1
	}
	printf("1~100 짝수의 합: %d\n", b);*/

	int num, a = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (a < num) //a가 num이 될 때 탈출
	{
		printf("handaman!\n");
		a++;
	}

	return 0;
}