#include<stdio.h>

int main() {
	int* numPtr1; //단일 포인터 선언
	int** numPtr2; //이중 포인터 선언
	int num1 = 10;

	numPtr1 = &num1; //num1의 메모리 주소 저장
	numPtr2 = &numPtr1; //numPtr1의 메모리 주소 저장
	printf("%d\n", **numPtr2); //numPtr2는 numPtr1의 주소로 접근 -> numPtr1은 num1의 주소를 가르키기에 *이 붙어있으므로 num1의 값을 출력
	//포인터를 두 번 역참조하여 num1의 메모리 주소에 접근
	return 0;

}