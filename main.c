#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 김나현
// 부호 없는 정수를 16진수로 입력 받아 최하위 바이트부터 순서대로 각 바이트의 값을
//16진수로 출력하는 프로그램 
int main(void) {
	
	unsigned int su;
   
   	printf("16진수로 데이터를 입력하세요: ");
   	scanf("%x", &su);
   
   	printf("byte 0: %02x\n", su & 0xFF);
    printf("byte 1: %02x\n", (su >> 8) & 0xFF);
    printf("byte 2: %02x\n", (su >> 16) & 0xFF);
    printf("byte 3: %02x\n", (su >> 24) & 0xFF);
	
	return 0;
}
