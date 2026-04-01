#include<stdio.h>
int main() {


	int cnt = 0;//정수형 변수 선언
	for (int i = 1; ;i++) { //정수형 변수 i = 0; ;i에 1씩 더하기
		if (i > 10){
			break;
		}
		if (i % 3 == 0) {
			cnt++;
		}
	}
	printf("3의 배수의 개수: %d\n", cnt);
	return 0;
}
