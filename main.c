#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
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
   
   printf("%d���� ������ �Է��ϼ���: ", size);
   for (i=0;i<size;i++)
      scanf("%d", &arr[i]);
   for (i=0, sum=0;i<size;i++)
      sum += arr[i];
   avg = (float)sum / size;
   printf("�Էµ� ������ �հ�: %d\n", sum);
   printf("�Էµ� ������ ���: %.2f\n", avg);
   
   free(arr);
   arr = NULL;
}
