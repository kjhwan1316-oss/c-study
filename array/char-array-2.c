#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruits[3][20]; //3행 20열(0~2행, 0~19열)
    
    for (i = 0; i < 3; i++) { //i는 0, i가 3미만이면 반복, i에 1씩 추가함
        printf("과일을 입력해주세요: ");
        scanf(" %s", fruits[i]); //[i]가 없으면 fruits[0]의 값만 저장되어 fruits[1], fruits[2]의 값이 나오질 않음
        printf("%d 번째 과일: %s \n", i, fruits[i]);
    }
    return 0;
}
