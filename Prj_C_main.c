#include <stdio.h>
#include "Prj_C.h"
//202395004 김나현
 
int main() 
{
	int num;
	
	while (1) {
	
		printf("출력할 구구단(2~9, 종료 : 0) : ");
//	printf("정수 입력 : ");
		scanf("%d", &num);
//	printf("%d! 결과 = %d\n", num, Factorial(num));
//	printf("1부터 %d까지 합 = %d\n", num, accumSum(num));
		if (num == 0)
			printf("구구단 종료!\n");
			break;
			
		else if (num > 1 && num < 10)
			gugudan(num);

		
		else 
		{
			printf("유효하지 않은 데이터 값!\n");
			printf("다시 입력하세요.\n");
		}

	}
	return 0;
}
