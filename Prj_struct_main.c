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
//	printf("�̸� : ");
//	scanf("%s", s.name);
//	
//	printf("���� ���� : ");
//	scanf("%d", &s.kor);
//	
//	printf("���� ���� : ");
//	scanf("%d", &s.eng);
//	
//	s.avg = (s.kor + s.eng) / 2.0f;
//	
//	printf("\n--- ����ü Ȱ�� ---\n");
//	printf("�л� �̸� ==> %s\n", s.name);
//	printf("���� ���� ==> %d\n", s.kor);
//	printf("���� ���� ==> %d\n", s.eng);
//	printf("��� ���� ==> %5.1f\n", s.avg); //5.1f 5�ڸ� ��Ƽ� �Ҽ��� ���� �� �ڸ����� ǥ���� -> ���ʿ� �� �ڸ��� ��. 
//	
//}

//����ü �迭 
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
		printf("--- %d ��° ---\n", i+1);
		printf("�̸� : ");
		scanf("%s", s[i].name);
		printf("���� ���� : ");
		scanf("%d", &s[i].kor);
		printf("���� ���� : ");
		scanf("%d", &s[i].eng);
		
		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
	}
	
	fflush(stdin);
	printf("\n\n�˻��� �̸� : ");
	gets(name);
	
	for(i=0; i<SIZE;i++)
		if (strcmp(s[i].name, name) == 0) break;
		
	if(i==SIZE)
		printf("�ش� �̸��� ã�� �� �����ϴ�.\n");
	else
		printf("%s => ���� ���� : %d, ���� ���� : %d, ��� ���� : %5.1f\n", s[i].name, s[i].kor, s[i].eng, s[i].avg);

}
