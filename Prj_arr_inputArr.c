#include <stdio.h>
#include "Prj_arr.h"
#define MAX 5
//202395004 �質��

void inputArr(int arr[]) {
	
	int i;
	
	printf("���� 5�� �Է� \n");
	
	for (i = 0; i < MAX; i++) {
		printf("%d��° ���� : ", i + 1);
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
