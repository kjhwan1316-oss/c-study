#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	do {
		printf("메뉴를 선택하세요(1,2,3): ");
		scanf("%d", &i);
		if (i == 1) {
			printf("새로만들기\n");
		}
		else if (i == 2) {
			printf("파일열기\n");
		}
		else if (i == 3) {
			printf("파일 닫기\n");
		}
		else {
			printf("다시 입력해주세요\n");
		}
	} while (i > 3 || i < 1);
	printf("선택 메뉴: %d\n", i);

	return 0;
}