#include<stdio.h>

int main()
{
	/*int a, b, c;
	a = 5 % 3;
	a--;
	b = (a++) + 3;
	printf("%d, %d\n", a, b);
	c = (++a) + 3; 
	printf("%d,%d,%d\n", a, b, c);*/

/*	int num1 = 16, num2 = 44;
	int a = num1++;
	int b = --num2;
	printf("%d", a + b);*/

	int val1 = 10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2 == 12); //val1, val2위 조건을 둘 다 만족하므로 결과는 참인 1이 나온다
	result2 = (val1 < 12 || val2>12); //val1은 참이고 val2가 거짓이지만 ||이므로 하나만 만족하면 되므로 참인 1이 나온다
	result3 = (!val1); // !는 val1값을 거짓으로 판명하여 거짓인 0이 니온다
	printf("result1 %d\n", result1);
	printf("result2 %d\n", result2);
	printf("result3 %d\n", result3);



}