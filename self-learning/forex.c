#include<stdio.h>

int main() {
	int a[5] = { 9,1,7,3,5 }; //배열 a
	int i, j, min, t; //정수형 변수 선언
	for (i = 0;i < 4;i++) { //i = 0; i가 4이하면 반복; i에 1씩 더하기
		min = i; //min에 i의 값을 저장
		for (j = i + 1;j < 5;j++) { //j는 i+1; j가 5이하면 반복; j에 1씩 더하기
			if (a[j] < a[min]) //배열a[j]의 값이 a[min]보다 낮다면 실행
				min = j; //min에 j 저장
		}
		t = a[i]; //t에 a[i]의 값을 저장
		a[i] = a[min]; //a[i]의 자리에 a[min]을 넣기
		a[min] = t; //a[min]자리에 t 넣기

	}
	for (i = 0;i < 5;i++) { //i 초기값 0; i가 5이하면 반복; i에 1씩 더하기
		printf("%2d", a[i]); //a[i]의 값 출력, 총 5번 반복
	}

}