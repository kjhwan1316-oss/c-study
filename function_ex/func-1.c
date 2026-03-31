#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int a, int b); //함수 원형
int Input(void); //함수 원형에는 ;을 꼭 붙여야함
void Result_Print(int val);
void Intro(void);

int main()
{
	int a, b, result;
	Intro(); //Intro 함수를 호출(참조 호출), ()안에 인수가 없음
	//함수 앞에 형이 없음, 반환되는 것이 없음
	a = Input(); //Input 함수를 호출,인수 없음, 값을 입력받는다
	b = Input(); //Input 함수를 호출,인수 없음, 값을 입력받는다 
	result = Add(a, b); //Add 함수를 호출,인수 있음, Input의 값을 보낸다(정수형 a, b)
	Result_Print(result); //Result_Print함수를 호출, result값을 보낸다
	return 0;
}

void Intro(void) { //함수, ()안에 매개변수 없음
	//반환되는 값이 없음 (void)
	printf("******START****** \n"); //제목 출력 구문
	printf("두 개의 정수 입력: \n"); //출력하고 main() 함수의 Intro()로 돌아간다
	
}

int Input(void) { //사용자 정의 함수, 매개변수 없음
	int input; //변수 선언
	scanf("%d", &input); //정수형 숫자 입력
	return input; //입력한 값을 main()함수의 input으로 보낸다
	//int Input() -> int는 반환되는 값의 형 의미
}

int Add(int i, int j) { //int i, int j => 매개변수(형 선언)
	//a -> i, b -> j가 각각 받음
	return i + j; //a와 b의 합의 결과를 main()함수의 Add(a, b)로 반환(int 형)
	//int Add(int i, int  j) -> int
}

void Result_Print(int val) { //result -> val(정수형)
	printf("덧셈의 대한 결과: %d\n", val); 
	printf("******END****** \n"); 
	//반환되는 값이 없으면 void를 써야한다
}
void Result_Print(int val) { //result -> val(정수형)
	printf("덧셈의 대한 결과: %d\n", val);
	printf("******END****** \n");
	//반환되는 값이 없으면 void를 써야한다
}
