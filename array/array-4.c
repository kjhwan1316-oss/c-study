#include<stdio.h>
void f3(); //함수 원형
void arrPrint(int k[2][3]); //함수 원형

void f1() { //함수 f1 //호출해야만 실행 

	int a[2][3] = { {4,5,6},{7,8,9} };
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("========================\n");



}
void f2() {
	int b[2][3]; //2행 (0 1), 3열 (0 1 2) 요소 6개
	int totalsize = sizeof(b); //배열 b 전체 사이즈
	printf("%d\n", totalsize); //0번째 행의 사이즈 (24바이트)
	int bsize = sizeof(b[0]); //0번째 행의 사이즈 (12바이트)
	printf("%d\n", bsize);
	printf("%d\n", sizeof(b[0][0])); //0행 0번째 원소의 사이즈 (4바이트)
	printf("%d\n", sizeof(b) / sizeof(b[0])); //전체 크기 / 한 행 크기 //24바이트 / 12바이트 = 2바이트
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //한 행 크기 / 한 원소의 크기 //12바이트 / 4바이트 = 3바이트
	printf("=============================\n");


}
int main(void) { //main함수는 반드시 1개
	//f1(); //함수는 소괄호 필요
	//f2();
	f3();


	return 0;
}

void f3() {
	int a[2][3] = { {1,2,3}, { 4,5,6 } };
	//a[0][0]=1 a[0][1]=2 a[0][2]=3 a[1][0]=4 a[1][1]=5 a[1][2]=6
	// 배열 초기화, 1,2,3,4,5,6
	arrPrint(a); //인수 보내면서 함수 호출, a배열을 arrPrint함수를 호출할 때 같이 보냄
	int b[2][3] = { {1}, {4} }; //1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1,2} }; //1 2 0 0 0 0
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 }; //1 2 3 4 5 6
	arrPrint(d);
	int i[2][3] = { 1,2,3,4 }; //1 2 3 4 0 0 
	arrPrint(i);
	int j[2][3] = { 1,2 }; //1 2 0 0 0 0 
	arrPrint(j);
	int k[2][3] = { 0 }; //0 0 0 0 0 0
	arrPrint(k);
	


}

void arrPrint(int k [2][3]) { //k를 매개변수 -> 인수와 유형, 개수 동일

	for (int e = 0; e < 2; e++) {
		for (int f = 0; f < 3; f++) {
			printf("%d ", k[e][f]);
		}
		printf("\n");
	}


}