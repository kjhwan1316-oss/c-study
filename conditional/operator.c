#include <stdio.h>

int main(void)
{
    int num1; //정수 변수 num1 선언
    int num2; //정수 변수 num2 선언
    int res1; //정수 변수 res1 선언
    double res2;//실수 변수 res2 선언
    char op, ch; //문자 변수 op, ch 선언


    while (1) { //무한 반복
        printf("첫 번째 수를 입력하세요: "); //입력을 받기 전 물어보는 문장
        scanf_s("%d", &num1); //num1 입력

        printf("연산자를 입력하세요(+ - * /): "); //입력을 받기전 물어보는 문장
        scanf_s(" %c", &op); //op 입력

        printf("두 번째 수를 입력하세요: "); //입력을 받기전 물어보는 문장
        scanf_s("%d", &num2); //num2 입력
        switch (op) //op의 결과에 따라 식 생성
        {
        case '+': //+를 입력했을때
            res1 = num1 + num2; //  더하기의 값을 표기하기위해 필요함
            break; 
        case '-': //-를 입력했을때
            res1 = num1 - num2; // 빼기의 값을 표기하기위해 필요함
            break;
        case '*': //*를 입력했을때
            res1 = num1 * num2; // 곱하기의 값을 표기하기위해 필요함
            break;
        case'/': ///를 입력헸을때
            res2 = (double)num1 / num2; // 나누기의 값을 표기하기위해 필요함
            break;

        }
        if (op == '+' || op == '-' || op == '*') //만약 op의 값이 +,-,* 일 때의 조건문
        {      // ||은 or의 의미를 지님
            printf("연산 결과: %d\n", res1); //switch문을 기반으로 값 생성
        }
        else if (op == '/') //만약 op의 값이 /일 때의 조건문
        {
            printf("연산 결과: %.1f\n", res2); //switch문을 기반으로 값 생성
        }
        else {
            printf("입력 오류\n"); //op의 값이 위 4개와 다를 때
        }
        printf("연산을 종료하시겠습니까?(Y/N)\n"); //끝내기 전 질문
        scanf_s(" %c", &ch); //ch 입력

        if (ch == 'Y' ||ch == 'y') //ch의 값이 y나 Y일 경우
        {
            printf("연산을 종료할게요\n");
            break;//코드 종료
        }
        else if (ch == 'N' ||ch == 'n')
        {
            printf("연산을 계속할게요\n");
        }







    }
	return 0;
}