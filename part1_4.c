#include<stdio.h>

int main(void) {


	int count = 0;
	char temp;

	while (1)
	{
		
		fputs("Data input (Ctrl+Z to exit) :", stdout);
		temp= getchar();
		if (temp == EOF) break;
		fflush(stdin); //프로세스입력 버퍼지우기
		count++;
	}

	printf("입력된 문자의 수 : %d \n", count);
	return 0;
}