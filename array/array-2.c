#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define STUDENTS 5 //기호상수

int main(void) {

	int score[STUDENTS]; //5개
	int sum = 0;
	double divi;
	int cnt = 0;
		for (int i = 0; i < 5; i++) {
			while (1) { //올바른 값을 입력받릉 때까지 반복
				printf("학생의 성적을 입력해주세요: ");
				scanf("%d", &score[i]);
				if (score[i] >= 0 && score[i] <= 100) {
					sum = sum + score[i];
					cnt += 1;
					break;
				}
				else {
					printf("다시 입력해주세요\n");
				}
			}
		}

		divi = (double) sum / cnt;
		printf("합계: %d, 평균: %.2f", sum, divi);




	return 0;
}