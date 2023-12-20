#include <stdio.h>
#include <stdlib.h>
#include "prj_function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b; //지역 변수 
	
	printf("두 정수 입력 : ");
	scanf("%d %d", &a, &b); 
		
	printf("함수 유형1 호출 : %d\n", add1(a, b));
	add2(a, b);
	printf("함수 유형3 호출 : %d\n", add3());
	add4();
	
	return 0;
}
