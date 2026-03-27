#define _CRT_SECURE_NO_WARNINGS //scanf에 _s가 없어도 경고보내지않기
#include<stdio.h>

int main(void) {

	int price, money; //정수형 변수 선언
	int change; //정수형 변수 선언
	int a, b, c, d; //정수형 변수 선언
	printf("물건은 얼마인가요? "); //물건의 값을 물어보는 질문 출력
	scanf("%d", &price); //물건의 값 입력
	printf("돈을 넣어주세요 "); //넣은 돈을 물어보는 질문 출력
	scanf("%d", &money); //넣은 돈의 값 입력
	change = money - price; //거스름돈의 변수 = 넣은 돈 - 물건의 값
	
	if (change < 0) { //물건의 값이 넣은 돈보다 많을 때
		printf("잔액이 부족합니다"); //잔돈이 부족하여 다음 코드가 실행하지않음
	}
	else { //넣은 돈이 물건의 값보다 많을 때
		printf("거스름돈은 총 %d원 입니다.\n", change); //계산된 거스름돈 출력

		a = change / 5000; //거스름돈이 5000원이 넘었을 때 5000원을 얼마나 줄 수 있는가를 계산
		change = change % 5000; //위 계산을 끝내고 남은 거스름돈 계산

		b = change / 1000; //위의 거스름돈에서 남은 거스름돈이 1000원이 넘었을 때 1000원을 얼마나 줄 수 있나를 계산
		change = change % 1000; //거스름돈을 계산했을 때 남은 돈이 얼마인가를 계산

		c = change / 100; //남은 거스름돈 중에서 100원은 얼마나 있는지를 계산
		change = change % 100; //계산 후 남은 거스름돈 계산
		
		d = change / 10; //남은 거스름돈 중에 10원이 얼마나 있는지 계산
		change = change % 10; //계산 후 남은 거스름돈 계산
		
		printf("5000원 %d개\n", a); //계산된 a의 값 출력
		printf("1000원 %d개\n", b); //계산된 b의 값 출력
		printf("100원 %d개\n", c); //계산된 c의 값 출력
		printf("10원 %d개\n", d); //계산된 d의 값 출력
	}



	return 0;
}