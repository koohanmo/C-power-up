/*
C Programming powerUp -Page 38
���� ������ Ȱ��
2016-06-26
*/

#include<stdio.h>

int main(void)
{
	int a, b,c;
	
	fputs("�ΰ��� ���ڸ� �Է��ϼ���",stdout);
	scanf("%d %d", &a, &b);
	printf("ū ���� %d \n", (a < b) ? b : a);

	fputs("������ ���ڸ� �Է��ϼ���", stdout);
	scanf("%d %d %d", &a, &b, &c);
	a = ((a < b) ? b : a);
	printf("ū ���� %d \n", ((a < c) ? c : a));

	return 0;
}