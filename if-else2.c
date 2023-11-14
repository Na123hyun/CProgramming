#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 김나현
//입력 받은 수가 3과 5의 배수이면, "두 수의 배수이다."
//그렇지 않으면 "두 수의 배수가 아니다."을 출력하는 프로그램 
int main(void) {
	
	int num;
	
	printf("숫자 입력 : ");
	scanf("%d", &num);
	
	if(num % 3 == 0 && num % 5 == 0)
		printf("두 수의 배수이다.");
	else
		printf("두 수의 배수가 아니다.");
	
	return 0;
}
