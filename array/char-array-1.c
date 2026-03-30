#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[30] = "C language"; //문자베열 최대 30자
    int i = 0; //0부터 시작

    while (str[i] != '\0') //만족할 때 반복
                           //!= : 다르다, \0는 null값을 의미
                           //문자열 내용을 끝나는시점 반드시 null이 들어감
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}