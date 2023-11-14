#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1번 : 3500원, 2번 : 3700원, 3번 : 2500원 - 결제 금액 

int main(void) {
	
	int menu, sum = 0;
	
	do {
		printf("\n주문하시겠습니까? \n");
		printf("<1> 카페라떼(3500원) <2> 카푸치노(3700원) <3> 아메리카노(2500원) <4> 그만 시키겠습니다. : ");
		scanf("%d", &menu);
		

		switch (menu) {
			case 1 :
				printf("카페라떼를 주문하셨습니다. \n");
				sum += 3500;
				break;
			case 2 :
				printf("카푸치노를 주문하셨습니다. \n");
				sum += 3700;
				break;
			case 3 :
				printf("아메리카노를 주문하셨습니다. \n");
				sum += 2500;
				break;
			case 4 :
				printf("주문하신 메뉴를 준비하겠습니다. \n");
				break;
			default :
				printf("잘못 주문하셨습니다. \n");
		}
	} while (menu != 4);
		printf("결제 금액은 %d원 입니다", sum);
		

	return 0;
}
