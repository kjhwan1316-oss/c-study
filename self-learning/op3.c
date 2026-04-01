#include<stdio.h>

int main() {
	int a = 10, b = 20; //정수형 변수 선언
	int max;//정수형 변수 선언
	max = (a > b) ? a : b; //max의 안에 만약 a가 b보다 크다면 a의 값을 저장, 아니면 b의 값을 저장
	printf("%d", max); //max의 값 츨력

	return 0;
}