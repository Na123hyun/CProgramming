#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//main�Լ� �Ʒ� �Լ��� ������ ��쿡�� 
//����� ���� �Լ��� ����( ������Ÿ��) ����
//int add1(int a, int b);
//void add2(int a, int b);
//int add3();
void add4();

int main(void) {
	
//	int result;
//	//�Լ� ȣ��
//	result = add1(2, 3);
//	printf("�Լ� ����1 ȣ�� : %d\n", result);
	
	printf("�Լ� ����1 ȣ�� : %d\n", add1(2, 3));
	add2(10, 3);
	printf("�Լ� ����3 ȣ�� : %d\n", add3());
	add4();
	return 0;
}

//�Ű������� ��ȯ ���� �ִ�. 
int add1(int a, int b) {
//	int result;
//	result = a + b;
//	return result;
	return a + b; 
} 

//��ȯ ���� ����. 
void add2(int a, int b) {
	printf("�Լ� ����2 ��� : %d\n", a + b);
} 

//�Ű������� ����. 
int add3() {
	//���� ���� 
	int a = 10, b = 3;
	return a + b; 
} 

//�Ű������� ��ȯ ���� ����. 
void add4() {
	//���� ���� 
	int a = 10, b = 3;
	printf("�Լ� ����4 ��� : %d\n", a + b);
} 
