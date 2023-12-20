#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *px, int* py); 

int main(void) {
	
	int a, b;
	
	printf("숫자를 입력하시오. \n");
	scanf("%d %d\n", &a, &b);
	
	printf("a = %d, a = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

}

void swap(int* px, int* py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}
