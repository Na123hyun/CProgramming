#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1�� : 3500��, 2�� : 3700��, 3�� : 2500�� - ���� �ݾ� 

int main(void) {
	
	int menu, sum = 0;
	
	do {
		printf("\n�ֹ��Ͻðڽ��ϱ�? \n");
		printf("<1> ī���(3500��) <2> īǪġ��(3700��) <3> �Ƹ޸�ī��(2500��) <4> �׸� ��Ű�ڽ��ϴ�. : ");
		scanf("%d", &menu);
		

		switch (menu) {
			case 1 :
				printf("ī��󶼸� �ֹ��ϼ̽��ϴ�. \n");
				sum += 3500;
				break;
			case 2 :
				printf("īǪġ�븦 �ֹ��ϼ̽��ϴ�. \n");
				sum += 3700;
				break;
			case 3 :
				printf("�Ƹ޸�ī�븦 �ֹ��ϼ̽��ϴ�. \n");
				sum += 2500;
				break;
			case 4 :
				printf("�ֹ��Ͻ� �޴��� �غ��ϰڽ��ϴ�. \n");
				break;
			default :
				printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
		}
	} while (menu != 4);
		printf("���� �ݾ��� %d�� �Դϴ�", sum);
		

	return 0;
}
