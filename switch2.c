#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 김나현 
int main(void) {

	double num;
	char menu;
	
	printf("계절?? : ");
	scanf("%d", &num);
	
	switch (manu); {
		case '봄' :
			printf("봄을 선택하셨습니다. \n");
			break;
			
		case '여름' :
			printf("여름을 선택하셨습니다. \n");
			break;
			
		case '가을' :
			printf("가을을 선택하셨습니다. \n");
			break;
			
		case '겨울' :
			printf("겨울을 선택하셨습니다. \n");
			break;
			
		default :
			printf("잘못 입력하셨습니다.");
	}



	return 0;
}
