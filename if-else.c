#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 �質��
//����, ����, ���� �� ���� ������ �Է� �޾Ƽ� �� ������ ������ 40�� �̻��̰�,
//3���� ����� 60�� �̻��̸� �հ�, �׷��� ������ ���հ��� ó���ϴ� ���α׷� 
int main(void) {
	
	int kor, eng, math, avg;
	
	printf("�� ������ ���� �Է�(����, ����, ����) : ");
	scanf("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;
	printf("�� ������ ��� : %d\n\n", avg); 
	
	if(kor>=40 && eng>=40 && math>=40 && avg>= 60) //and �������� 
		printf("�հ�");
	else
		printf("���հ�");
	 
	return 0;
}
