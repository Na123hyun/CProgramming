#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num, i, k;
		
    while (1) {
    	
        printf("Line 개수 : ");
        scanf("%d", &num);

       if (num == 0) {
       		printf("프로그램 종료\n");
       		break;
       }
       else {
			i = 1; //초기값 
       		while (i <= num) {
       			k = 1; //초기값 while문 시작하기 전에 초기화 
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
