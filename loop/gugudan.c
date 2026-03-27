#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
     
    for (int i = 1; i <= 12; i+=3) //1단 부터 시작, 12단 까지 출력, 한 칸이 지날 때마다 3씩 증가
    {
       
        printf("\t %2d 단 \t\t", i); //i단 출력
        printf("\t %2d 단 \t\t", i+1); //i로 부터 1더한 값의 구구단 출력
        printf("\t %3d 단 \n", i+2);  //i로 부터 2더한 값의 구구단 출력
        //한 칸에 3단씩 출력
        for (int j = 1; j <= 9; j++) //1부터 시작, 9까지 곱함, 반복할 때마다 1씩 추가
        {
            printf("\t%d * %d = %2d\t", i, j, i * j); //i*j에서 j가 1씩 추가되다가 9에서 끝냄
            printf("\t%d * %d = %2d\t", 1+i, j, (i+1) * j); //(i+1)*j에서 j가 1씩 추가되다가 9에서 끝냄
            printf("\t%d * %d = %2d\n", 2 + i, j, (i + 2) * j); //(i+2)*j에서 j가 1씩 추가되다가 9에서 끝냄
        }

    } //이 for문은 안에 있는 for문이 끝나면 반복
    return 0;


}