#define _CRT_SECURE_NO_WARNINGS //scanf만 사용할 때 경고하지말고 바로 실행하기
#include<stdio.h>

int main(void)
{
/*	int a, b; //정수형 변수 선언

	printf("단을 입력하세요: ");
	scanf("%d", &a); //위 선언으로 _s없이 출력할 수 있음
	printf("\t< %d 단 >\n", a); //스캔 받은 숫자가 몇 단인지 알려주는 제목
	for (b = 1; b <= 9; b++) { //1부터 시작; b가 9보다 작거나 같으면 반복; b에 1씩 더하기
		printf("\t%d * %d = %d\n", a, b, a*b); //마지막 %d는 결과가 나와야하므로 a*b를 사용
	}
	
	return 0;*/
	//int  a, b; //정수형 변수 선언
	printf("\t2~9단\n"); //반복문에서 제목으로 쓰고싶다면 반복문이 시작하기 전에 써야함
	for (a = 2; a <= 9; a++) { //a는 b의 반복이 끝나야 반복
							   //a는 2부터 시작, 9와 같거나 작을 때 반복, a에 1을 추가하고 반복
		b = 1;
		for (b = 1; b <= 9; b++) { //b는 1부터 시작; b가 9보다 작거나 같으면 반복; b에 1씩 더하기
			printf("\t % d * %d = %-3d\n", a, b, a * b);
			//3d -> 3자리
			//원래는 오른쪽 정렬
			//-를 붙이면 왼쪽 정렬
		}//b for 끝
	}// a for 끝
}//main 끝