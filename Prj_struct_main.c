#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//struct student {
//	char name[10];
//	int kor;
//	int eng;
//	float avg;	
//};
//
//void main() {
//	
//	struct student s;
//	
//	printf("이름 : ");
//	scanf("%s", s.name);
//	
//	printf("국어 점수 : ");
//	scanf("%d", &s.kor);
//	
//	printf("영어 점수 : ");
//	scanf("%d", &s.eng);
//	
//	s.avg = (s.kor + s.eng) / 2.0f;
//	
//	printf("\n--- 구조체 활용 ---\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("평균 점수 ==> %5.1f\n", s.avg); //5.1f 5자리 잡아서 소수점 이하 한 자리까지 표시함 -> 왼쪽에 한 자리가 빔. 
//	
//}

//구조체 배열 
struct student {
	char name[40];
	int kor;
	int eng;
	float avg;
};

int main(void) {
	int i;
	char name[10];
	struct student s[SIZE];
	
	for(i=0; i<SIZE; i++) {
		printf("--- %d 번째 ---\n", i+1);
		printf("이름 : ");
		scanf("%s", s[i].name);
		printf("국어 점수 : ");
		scanf("%d", &s[i].kor);
		printf("영어 점수 : ");
		scanf("%d", &s[i].eng);
		
		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
	}
	
	fflush(stdin);
	printf("\n\n검색할 이름 : ");
	gets(name);
	
	for(i=0; i<SIZE;i++)
		if (strcmp(s[i].name, name) == 0) break;
		
	if(i==SIZE)
		printf("해당 이름을 찾을 수 없습니다.\n");
	else
		printf("%s => 국어 점수 : %d, 영어 점수 : %d, 평균 점수 : %5.1f\n", s[i].name, s[i].kor, s[i].eng, s[i].avg);

}
