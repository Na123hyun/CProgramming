#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	double num1, num2;
	char op;
	double result = 0;
	
	printf("수식? : ");
	scanf("%lf %c %lf", &num1, &op, &num2);
	
	switch (op) {
		case '+' :
			printf("%g %d %g = %g \n", num1, op, num2, num1 + num2);
			break;
			
		case '-' :
			printf("%g %d %g = %g \n", num1, op, num2, num1 - num2);
			break;
			
		case '*' :
			printf("%g %d %g = %g \n", num1, op, num2, num1 * num2);
			break;
			
		case '/' :
			printf("%g %c %g = %g \n", num1, op, num2, num1 / num2);
			break;
			
		default :
			printf("연산 불가능");
	}

	return 0;
}
