#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size;
	int* arr = NULL;
	int i, sum; 
	float avg;
	
	printf("������ ����? ");
	scanf("%d", &size);
	
	arr = (int*) malloc(sizeof(int) * size);
	if (arr == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		return -1;
	}
	
	printf("%d���� ������ �Է��ϼ���. : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	for (i = 0, sum = 0; i < size; i++)
		sum += arr[i];
	printf("�Էµ� ������ �հ� : %d\n", sum);
	
	avg = sum / (float)size;
	
	printf("��� : %lf\n", avg);
	
	free(arr);
}
