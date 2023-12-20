#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size;
	int* arr = NULL;
	int i, sum; 
	float avg;
	
	printf("정수의 개수? ");
	scanf("%d", &size);
	
	arr = (int*) malloc(sizeof(int) * size);
	if (arr == NULL) {
		printf("동적 메모리 할당 실패\n");
		return -1;
	}
	
	printf("%d개의 정수를 입력하세요. : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	for (i = 0, sum = 0; i < size; i++)
		sum += arr[i];
	printf("입력된 정수의 합계 : %d\n", sum);
	
	avg = sum / (float)size;
	
	printf("평균 : %lf\n", avg);
	
	free(arr);
}
