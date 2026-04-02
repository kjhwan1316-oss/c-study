#include<stdio.h>

int main() {
/*	int i = 3000;
	int* p = NULL; ///포인터 변수 선언
	
	p = &i; //i변수의 주소를 p 포인터 변수에 넣음

	printf("p= %p\n", p);
	//%p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);
	i = 4000;
	
	printf("i = %d\n", i);
	*p = 5000;
	printf("*p = %d\n", *p);*/
	//주소에 저장된 내용에 접근하는 포인터
	int x = 10, y = 20; //정수형 변수 선언
	int* pi; //포인터 변수 선언

	pi = &x; //x의 주소를 pi라는 포인터 변수에 넣는다
	printf("pi= %p\n", pi); //x의 주소인 pi를 출력
	printf("*pi= %p\n", *pi); //pi가 가르키는 곳 -> x의 값 출력

	pi = &y;  //y의 주소를 pi라는 포인터 변수에 넣는다
	printf("pi= %p\n", pi);  //y의 주소인 pi를 출력
	printf("*pi= %p\n", *pi); ////pi가 가르키는 곳 -> y의 값 출력
	return 0;

	
}