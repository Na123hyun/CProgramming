#include <stdio.h>
#include "Prj_C.h"
//202395004 �質��
 
int main() 
{
	int num;
	
	while (1) {
	
		printf("����� ������(2~9, ���� : 0) : ");
//	printf("���� �Է� : ");
		scanf("%d", &num);
//	printf("%d! ��� = %d\n", num, Factorial(num));
//	printf("1���� %d���� �� = %d\n", num, accumSum(num));
		if (num == 0)
			printf("������ ����!\n");
			break;
			
		else if (num > 1 && num < 10)
			gugudan(num);

		
		else 
		{
			printf("��ȿ���� ���� ������ ��!\n");
			printf("�ٽ� �Է��ϼ���.\n");
		}

	}
	return 0;
}
