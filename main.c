#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 �質��
// ��ȣ ���� ������ 16������ �Է� �޾� ������ ����Ʈ���� ������� �� ����Ʈ�� ����
//16������ ����ϴ� ���α׷� 
int main(void) {
	
	unsigned int su;
   
   	printf("16������ �����͸� �Է��ϼ���: ");
   	scanf("%x", &su);
   
   	printf("byte 0: %02x\n", su & 0xFF);
    printf("byte 1: %02x\n", (su >> 8) & 0xFF);
    printf("byte 2: %02x\n", (su >> 16) & 0xFF);
    printf("byte 3: %02x\n", (su >> 24) & 0xFF);
	
	return 0;
}
