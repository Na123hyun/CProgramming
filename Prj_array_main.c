#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1. ��ũ�� ��� ����: #define MAX 5
//2. 5���� ���ڸ� �Է¹ٴ� �迭�� �����ϴ� �Լ�(inputArr()) �ۼ�
//3. �迭�� ����� ������ ���� ���ϴ� �Լ�(sumArr()) �ۼ� : sumArr() �Լ��� ���ϰ��� ���� 

int main(void) {
	
	int num[MAX];
	
	inputArr(num, MAX);
	
	int total = sumArr(num, MAX);
	
	printf("�� �հ�� : &d\n", total);
	
	return 0;
}
