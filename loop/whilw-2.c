#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num, cnt=0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //i는 원하는 배수의 숫자 //3

	printf("배수의 계수 입력: ");
	scanf("%d", &num); //보여지는 배수의 개수 //5

	while (cnt++<num) 

		//1<5조건 물어보고 참 => 다음 문장 가기 전에 cnt+1->cnt 2이됨
		//2<5조건 물어보고 참 => 다음 문장 가기 전에 cnt+1->cnt 3이됨
		//3<5조건 물어보고 참 => 다음 문장 가기 전에 cnt+1->cnt 4이됨
		//4<5조건 물어보고 참 => 다음 문장 가기 전에 cnt+1->cnt 5이됨
		//5<5조건 물어보고 거짓 => 반복문 탈출

		//결과적으로 cnt가 0으로 시작했기에 5를 입력하면 <5인 4번 반복이 아닌 0을 포함하여 총 5번 반복하여 탈출하게된다
		printf("%d ", i*cnt);









	
}