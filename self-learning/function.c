#include<stdio.h>

int digit(int n) { //정수 함수
	if (n < 10) return n; //n이 10보다 낮으면 반환
	return (n % 10) + digit(n / 10); 

}
int main() {
	printf("%d", digit(235));
}
//digit(235)의 값이 235 < 10이 아니므로
//(235 % 10) + digit(235/10) -> 5 + digit(23)
//23 < 10이 아니므로  
//(23 % 10) + digit(23 / 10) -> 3 + digit(2)
//2<10이므로 그대로 반환
//값을 계산하면 digit(2) = 2, digit(23) = 3 + 2 = 5, digit(235) = 5 + 5 =10
//결과: 10