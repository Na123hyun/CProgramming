#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num;
	
	printf("���� : ");
	scanf("%d", &num);
	
	if (num == 0)
		printf("0�Դϴ�. \n");
	
	else if (num > 0)
		printf("����Դϴ�. \n"); 
		
	else 
		printf("�����Դϴ�. \n"); 
	
	
	return 0;
}
