#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
//	char str[] = "Good morning!";
//	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
//	printf("�� ���� ������ ��� : %c\n", str[13]);
//	printf("�� ���� ������ ��� : %d\n", str[13]);
//	
//	//�迭 str�� ����� ���ڿ� ������ ���� ���� 
//	str[12] = '?';
//	printf("���ڿ� ��� : %s\n", str);

	char str[50];
	int idx = 0;
	
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s\n", str); 

	printf("���� ���� ��� : ");
	//�Է� ���� ���ڰ� �� ���ڰ� �ƴ϶�� 
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n�� ���ڸ� �� ���ڿ� ���� : %d\n", idx);
	
	return 0;
}
