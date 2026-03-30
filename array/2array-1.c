#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char menu[5][10] = { //5행 10열(0~4행, 0~9열)
        "init",          //한 행에서 문자 하나당 한 행 씩 차지함
        "open",          //1행씩 초기값 설정
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++) //i는 0, i가 5미만이면 반복, i에 1씩 추가함
        printf("%d 번째 메뉴: %s \n", i, menu[i]); //menu[i]는 행을 의미

    return 0;
}
