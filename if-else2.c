#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 �質��
//�Է� ���� ���� 3�� 5�� ����̸�, "�� ���� ����̴�."
//�׷��� ������ "�� ���� ����� �ƴϴ�."�� ����ϴ� ���α׷� 
int main(void) {
	
	int num;
	
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	if(num % 3 == 0 && num % 5 == 0)
		printf("�� ���� ����̴�.");
	else
		printf("�� ���� ����� �ƴϴ�.");
	
	return 0;
}
