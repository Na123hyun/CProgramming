#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 202395004 �質�� 
// ������ ���� �Է� �޾Ƽ� ���� ���� �� ���(��, ���� ������ ���)
// (���ȭ��) 3���� ���� �Է� : 5 2 10, ���� ���� �� : 2 


int main(void) {
	
	int num1, num2, num3;
	int min; 

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	min = num1 < num2 ? num1 : num2;
	min = min < num3 ? min : num3;
	
	printf("���� ���� �� : %d", min);
	
	return 0;
}
