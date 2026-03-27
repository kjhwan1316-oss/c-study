#include<stdio.h>

int main(void) 
{
	

	for (int a = 5; a >= 1; a--) {

		for (int i = 1; i <= a; i++) {
			printf("*");
		}
		printf("\n");
	}
	/*for (int a = 1; a <= 5; a++) {

		for (int i = 1; i <= a; i++) {
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}