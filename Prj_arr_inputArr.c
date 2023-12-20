#include <stdio.h>
#include "Prj_arr.h"
#define MAX 5
//202395004 김나현

void inputArr(int arr[]) {
	
	int i;
	
	printf("정수 5개 입력 \n");
	
	for (i = 0; i < MAX; i++) {
		printf("%d번째 정수 : ", i + 1);
		scanf("%d", arr + i);
	}
}

int sumArr(int arr[]) {
	int i, sum = 0;
	
	for (i = 0; i < MAX; i++) {
		sum += arr[i];
	}
	return sum;
}
