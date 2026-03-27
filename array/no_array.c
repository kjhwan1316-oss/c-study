#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, s, d, f,g,h,j,k,l,w,e;
	float q;
	printf("점수를 입력해주세요: ");
	scanf("%d", &a);
	scanf("%d", &s);
	scanf("%d", &d);
	scanf("%d", &g);
	scanf("%d", &h);
	scanf("%d", &j);
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &w);
	scanf("%d", &e);
	f = a + s + d + g + h + j + k + l + w + e;
	q = (a + s + d + g + h + j + k + l + w + e) / 3;
	printf("합: %d", f);
	printf("평균: %.2f", q);


	return 0;
}