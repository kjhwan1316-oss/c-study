#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //#include :전처리기, 입출력 관련 해더파일
#include<string.h> //문자열 함수를 사용하기위한 해더파일

int main(void) {

	char a[30];
	char b[30];
	int res;

	printf("첫번째 단어를 입력해주세요: ");
	scanf("%s", a); //배열명은 배열의 첫 주소라 &를 쓰지않음, 다만 배열의 요소는 &를 사용함 ex) &a[3]
	printf("두번째 단어를 입력해주세요: ");
	scanf("%s", b);
	res = strcmp(a, b); //문자열 비교
	//res는 0, 음수, 양수
	if (res == 0) {
		printf("%s와(과) %s(이)가 같습니다\n", a, b); //두 문자의 문자열이 같을 때
	}
	else if (res < 0) {
		printf("%s(이)가 %s보다 앞에 있습니다\n", a, b); //음수이면 문자열1이 사전순으로 앞에 있음
	}
	else {
		printf("%s(이)가 %s보다 뒤에 있습니다\n", a, b); //양수이면 문자열1이 문자열2보다 시전순으로 뒤에 있음
	}


	return 0;
}