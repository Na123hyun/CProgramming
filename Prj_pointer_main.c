#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
//	int num1 = 100, num2 = 100;
//	int * pnum;
//	
//	pnum = & num1; //������ pnum��  num1�� ����Ų��. 
//	(*pnum) += 30; //num1 += 30;�� ����. 
//	
//	pnum = & num2; // ������ pnum�� num2�� ����Ų��. 
//	(*pnum) -= 30; //num2 -= 30;�� ����.
//	
//	printf("num1 : %d, num2 : %d \n", num1, num2);
	
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;
	
	(*ptr1) ++;
	(*ptr2) ++;
	printf("%d \n", num);
	
	return 0;
}
