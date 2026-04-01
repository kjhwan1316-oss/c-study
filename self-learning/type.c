#include<stdio.h>

int main() {
	int a = 7, b = 2; //정수형 변수 선언
	int c; //정수형 변수 선언
	double d, e; //실수형 변수 선언

	c = a / b; // a를 b로 나눈 값을 저장 
	d = a / b; //a를 b로 나눈 값을 저장, 앞에 double이나 float을 쓰지 않이서 나머지가 저장되지 않는다
	e = (double)a / b; //a를 b로 나눈 값을 실수로 저장

	printf("c = %d\n", c); // c의 값을 정수로 출력
	printf("d = %.1f\n", d); //d의 값을 소수점 한 자리까지 출력, 
	printf("e = %.1f\n", e); //e의 값을 소수점 한 자리까지 출력

	return 0;

}