#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 김나현
//국어, 영어, 수학 세 개의 점수를 입력 받아서 각 과목의 점수가 40점 이상이고,
//3개의 평균이 60점 이상이면 합격, 그렇지 않으면 불합격을 처리하는 프로그램 
int main(void) {
	
	int kor, eng, math, avg;
	
	printf("세 과목의 점수 입력(국어, 영어, 수학) : ");
	scanf("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;
	printf("세 과목의 평균 : %d\n\n", avg); 
	
	if(kor>=40 && eng>=40 && math>=40 && avg>= 60) //and 논리연산자 
		printf("합격");
	else
		printf("불합격");
	 
	return 0;
}
