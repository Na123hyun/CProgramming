#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 202395004 김나현 
// 세계의 수를 입력 받아서 가장 작은 수 출력(단, 조건 연산자 사용)
// (출력화면) 3개의 정수 입력 : 5 2 10, 가장 작은 수 : 2 


int main(void) {
	
	int num1, num2, num3;
	int min; 

	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	min = num1 < num2 ? num1 : num2;
	min = min < num3 ? min : num3;
	
	printf("가장 작은 수 : %d", min);
	
	return 0;
}
