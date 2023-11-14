#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num;
	
	printf("정수 : ");
	scanf("%d", &num);
	
	if (num == 0)
		printf("0입니다. \n");
	
	else if (num > 0)
		printf("양수입니다. \n"); 
		
	else 
		printf("음수입니다. \n"); 
	
	
	return 0;
}
