#include <stdio.h>
#include "prj_function.h"

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
