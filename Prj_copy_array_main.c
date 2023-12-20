#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int x[SIZE] = {0}, y[SIZE] = {0};
	
	printf("정수 %d개 입력 : ",SIZE);
	input_array(x,SIZE);
	
	printf("\n x = ");
	print_array(x, SIZE);
	
	copy_array(x, y, SIZE);
	printf("\n배열 복사 \n y = ");
	print_array(y, SIZE);
	
	printf("\n배열 x의 원소 합 = %d\n", sum_array(x, SIZE));
	
}

