/*
C Programming powerUp -Page 38
조건 연산자 활용
2016-06-26
*/

#include<stdio.h>

int main(void)
{
	int a, b,c;
	
	fputs("두개의 숫자를 입력하세요",stdout);
	scanf("%d %d", &a, &b);
	printf("큰 수는 %d \n", (a < b) ? b : a);

	fputs("세개의 숫자를 입력하세요", stdout);
	scanf("%d %d %d", &a, &b, &c);
	a = ((a < b) ? b : a);
	printf("큰 수는 %d \n", ((a < c) ? c : a));

	return 0;
}