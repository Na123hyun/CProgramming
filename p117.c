#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 202395004 �質�� 
// �� �� num1, num2�� �Է�(���ڸ� ��)�޾Ƽ� ��Ʈ �����Ѵ�.
// 1. �μ��� ����(AND) ��� ���
// 2. �� ���� ����(OR) ��� ���
// 3. �� ���� ��Ÿ�� ����(XOR) ��� ���
// 4. num1 ����(NOT)�� ��� ��� 


int main(void) {
	
	int num1, num2;
	
	printf("�� �� �Է�(��, �� �ڸ� ����) ");
	scanf("%d %d" , &num1, &num2);
	
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	printf("~%d = %d\n", num1, ~num1);
	
	return 0;
}
