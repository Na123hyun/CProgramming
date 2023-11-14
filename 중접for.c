#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int num1, num2;
	
	for(num1 = 2; num1 <= 9; num1++)
	{
		printf("** %d **\n", num1);
		for(num2 = 1; num2 <= 9; num2++)
		{
			printf("%d x %d = %d \n", num1,num2,num1*num2);
		}
		printf("\n");
	}
	
	
	return 0;
}
