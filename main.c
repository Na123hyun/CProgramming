#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
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
   
   printf("%d개의 정수를 입력하세요: ", size);
   for (i=0;i<size;i++)
      scanf("%d", &arr[i]);
   for (i=0, sum=0;i<size;i++)
      sum += arr[i];
   avg = (float)sum / size;
   printf("입력된 정수의 합계: %d\n", sum);
   printf("입력된 정수의 평균: %.2f\n", avg);
   
   free(arr);
   arr = NULL;
}
