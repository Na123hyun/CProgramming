#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 ±è³ªÇö 

int main(void) {
		int num, i, k;
		
    for (;;) {
    	
        printf("Line °³¼ö : ");
        scanf("%d", &num);

       if (num != 0) 
	   {
       		for (i = 1; i <= num; i++)
			   {
       			for (k = 1; k <= i; k++) 
				   {
       					printf("*");
				   }
				printf("\n");
			   }
        }
		else 
			break;
        }
        
        return 0;
    }
    
