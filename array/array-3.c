#include<stdio.h>

void main()
{
	int b[4][3] = { {100,200,300},{10},{50,100,150},{30,40} };
	int sum = 0;
	//a[행][열] 0~2행 0~2열 -> 9개 요소 구성
	//0행에 1,2,3 / 1행에 4,5,6 / 2행은 7,8,9
	int i, j;
	for (i = 0; i < 4;i++) { //i는 행 의미 0~2
		for (j = 0;j < 3; j++) { //j는 열 의미 0~2
			printf("%d\t", b[i][j]); //9번 출력
			sum = sum + b[i][j];
		}
		printf("\n");
	}
	printf("총 합계: %d", sum);
}