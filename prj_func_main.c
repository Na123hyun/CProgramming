#include <stdio.h>
#include <stdlib.h>
#include "prj_function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b; //���� ���� 
	
	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b); 
		
	printf("�Լ� ����1 ȣ�� : %d\n", add1(a, b));
	add2(a, b);
	printf("�Լ� ����3 ȣ�� : %d\n", add3());
	add4();
	
	return 0;
}
