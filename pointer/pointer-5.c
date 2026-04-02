#include<stdio.h>
int add(int i, int j);
void sub(int x, int y, int u);
void arr_prn(int h[5]);

int main() {
	int a = 10, b = 20;
	int k;
	int c[5] = { 1,2,3,4,5 };
	k = add(a, b); //함수 호출, 인수 2개 -> 더할려고
	sub(a, b, k);


	arr_prn(c);
	return 0;
}
int add(int i, int j) { //매개변수: 형을 선언
	int k = i + j;
	return k; //30 반환
}
void sub(int x, int y, int u) {
	int o = x - y;
	printf("add: %d\n", u);
	printf("sub: %d\n", o);
}
void arr_prn(int h[5]) {
	for (int q = 0;q < 5;q++) {
		printf("%d\n", h[q]);
	}
}