#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num, i, k;
		
    while (1) {
    	
        printf("Line ���� : ");
        scanf("%d", &num);

       if (num == 0) {
       		printf("���α׷� ����\n");
       		break;
       }
       else {
			i = 1; //�ʱⰪ 
       		while (i <= num) {
       			k = 1; //�ʱⰪ while�� �����ϱ� ���� �ʱ�ȭ 
       			while (k <= i) {
       				printf("*"); 
				   	k++;
				}
				printf("\n");
				i++;
			}
		}
		printf("/n");
    }
        
	return 0;
}
