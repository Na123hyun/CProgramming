#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void copy_array(const int *source, int *target, int size) {
	
	int i;
	
	for (i = 0; i < size; i++)
		*(target + i) = *(source + i);
}

void print_array(const int *arr, int size) {

	int i;
	
	for (i = 0; i < size; i++)
		printf("%3d", *(arr + i));
	printf("\n");
	
}

int sum_array(const int *arr, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += *(arr + i);
	return sum;
}

void input_array(int *arr, int size) {
	int i;
	
	printf("배열에 넣을 정수를 입력 : \n ");
	for (i=0; i<size; i++) {
		printf("%d번 째 정수 : ", i+1);
		scanf("%d",arr+i);
	}
}
