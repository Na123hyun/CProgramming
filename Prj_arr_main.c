#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 김나현 
//1. 매크로 상수 정의: #define MAX 5
//2. 5개의 숫자르 입력바당 배열에 저장하는 함수(inputArr()) 작성
//3. 배열의 저장된 숫자의 합을 구하는 함수(sumArr()) 작성 : sumArr() 함수는 리턴값이 있음 


int main(void) {
	int arr[MAX];
	inputArr(arr);
	
	int total = sumArr(arr);
	
	printf("총 합계는 : %d\n", total);
	
	return 0;
}
