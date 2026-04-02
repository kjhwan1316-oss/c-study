#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count_even(int ar[10]);
void print_count(int res);

int main() {

	int ar[10];
	int res;
	printf("정수 10개 입력 : ");
	for (int i = 0;i < 10;i++) {
		scanf("%d", &ar[i]);
	}
	res = count_even(ar, 10);
	print_count(res);

	return 0;
}
//함수 정의
int count_even(int ar[10]) {
	 int cnt = 0;
	 for (int i = 0;i < 10; i++) {
		 if (ar[i] % 2 == 0) { //짝수이면 1증가
			 cnt+=1;
		 }
	}
	 return cnt; //반환되는 값(짝수의 개수)
}
//함수정의
void print_count(int res) { //매개변수 정수형 res
	printf("짝수의 개수 : %d\n", res);
}