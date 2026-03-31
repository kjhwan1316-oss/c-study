
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //#include :전처리기, 입출력 관련 해더파일
#include<string.h> //문자열 함수를 사용하기위한 해더파일

int main()
{
	char a[10] = "HELLO" ;
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	//b = "LOVE"; 오류
	strcpy(b, "LOVE"); //문자열 복사(대상, 문자열)
	//b[0] = 'L';
	//b[1] = 'O';
	//b[2] = 'V';
	//b[3] = 'E';
	printf("%s\n", b);
	//strcpy : 문자배열을 선언한 이후에 초기화가 안 됨
			// 이후 문자열 복사할때





	return 0;
} 