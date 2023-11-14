#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 202395004 김나현 
// 두 수 num1, num2를 입력(한자리 수)받아서 비트 연산한다.
// 1. 두수의 논리곱(AND) 결과 출력
// 2. 두 수의 논리합(OR) 결과 출력
// 3. 두 수의 배타적 논리합(XOR) 결과 출력
// 4. num1 부정(NOT)의 결과 출력 


int main(void) {
	
	int num1, num2;
	
	printf("두 수 입력(단, 한 자리 수로) ");
	scanf("%d %d" , &num1, &num2);
	
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	printf("~%d = %d\n", num1, ~num1);
	
	return 0;
}
