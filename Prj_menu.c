#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��ǻ�Ͱ��к� 202395004 �質�� 

int main(void) {
	
	int menu, num;
	
	printf("\n�޴�\n"); //�޴��� ù ���� 
	//�޴� -> �迭, ������, ����ü, ���� �޸�, ���α׷� ���� 
	printf("<1> �迭  <2> ������ <3> ����ü <4> ���� �޸� <5> ���α׷� ���� : "); 
	scanf("%d", &menu); //���� �Է� �ޱ� 
		
	switch (menu) { //switch������ case �� �ϳ��� �����Ͽ� ������ ������ 
		case 1 : //�迭 
			printf("�迭�� �����ϼ̽��ϴ�.\n");
			break; //case���� ������ ������ ������ break�� ���� 
			//switch �ȿ��� break�� ������ switch�� Ż���� 
			//break�� ������ switch�� ��(})�� ���� ������ ������ ��� ������ ������ 
		case 2 :
			printf("�����͸� �����ϼ̽��ϴ�.\n");
			break;
		case 3 :
			printf("����ü�� �����ϼ̽��ϴ�.\n");
			break;
		case 4 :
			printf("���� �޸𸮸� �����ϼ̽��ϴ�.\n");
			break;
		default : //��ġ�ϴ� case�� ���� �� ������ ������ default�� �� 
			printf("���α׷� ����\n");
			break; //default���� ������ ������ ������ break�� �ʿ��� 
	}
	
	if (menu == 1) { //�迭, �迭�� ����Ʈ ũ��� �迭�� ũ�� ���ϱ� 
		int arr[5]; //ũ�Ⱑ 5�� int �迭�� ���� 
		int size = 0; //�迭�� ũ��(������ ����)�� ������ ���� 
		int i;
		
		//�迭 ��ü�� ����Ʈ ũ�� 
		printf("\n�迭�� ����Ʈ ũ�� : %d\n", sizeof(arr));
		
		//sizeof �����ڸ� �̿��ϸ� �迭�� ũ��(������ ����)�� ���� �� ���� 
		//sizeof(arr) / sizeof(arr[0])�� arr �迭�� ũ�Ⱑ �� 
		size = sizeof(arr) / sizeof(arr[0]); //�迭�� ũ��(������ ����) 
		printf("�迭�� ũ�� : %d\n", size);
		
		//�迭�� �ݺ���, Ư�� for���� �Բ� ���Ǵ� ��찡 ���� 
		for (i = 0; i < size; i++) //�迭�� �ַ� for���� �Բ� ����� 
			arr[i] = 0; //�迭�� ����(arr[i])�� 0�� ���� 
		for (i = 0; i < size; i++)
			printf("%d", arr[i]); //�迭�� ���� ��� 
		printf("\n");
	}
	
	else if (menu == 2) { //������, �������� ����Ʈ ũ�� ���ϱ� 
		//������ ���� �� ���� ���������� �����Ͱ� ����Ű�� ������ ���������� 
		int *pi; //*�� ���ľ�, ������ ������ ������ �����ͷ� ������ 
		double *pd; //�������� ũ��� ���������� ������� �׻� ���� 
		char *pc;
		 
		//�������� ũ�� ���ϱ� 
		printf("\nsizeof(pi) = %d\n", sizeof(pi));
		printf("sizeof(pd) = %d\n", sizeof(pd));
		printf("sizeof(pc) = %d\n", sizeof(pc));
		
		//���������� ũ�� ���ϱ� 
		printf("sizeof(int*) = %d\n", sizeof(int*));
		printf("sizeof(double*) = %d\n", sizeof(double*));
		printf("sizeof(char*) = %d\n", sizeof(char*));
	}
	
	else if (menu == 3) { //����ü �迭, ����ü �迭�� ����Ͽ� 5�� �л��� ����, ���� ������ �Է� �ް�, 
		struct student { //�л� �Ѹ��� �˻��Ͽ� ��� ���ϱ� 
			char name[40];
			int kor; //���� 
			int eng; //���� 
			float avg; //��� 
		}; //����ü
		//����ü �迭�� �ʱ�ȭ�Ϸ��� {} �ȿ� �迭 ������ �ʱⰪ�� ������ 
		
		int i;
		char name[10];
		//����ü �迭�� �����Ϸ���, �迭 �̸��� ���� [] �ȿ� �迭�� ũ�⸦ �����Ѵ�. 
		struct student s[SIZE]; //ũ��� 5 
	
		for (i=0; i<SIZE; i++) {
			printf("\n--- %d ��° ---\n", i+1); //�л� 5�� �Է¹ޱ� 
			printf("�̸� : ");
			scanf("%s", s[i].name); //�̸� 
			printf("���� ���� : ");
			scanf("%d", &s[i].kor); //���� ���� 
			printf("���� ���� : ");
			scanf("%d", &s[i].eng); //���� ���� 
		
			s[i].avg = (s[i].kor + s[i].eng) / 2.0f; //��� 
		}
	
		fflush(stdin); //dev C++���� ��� 
		printf("\n�˻��� �̸� : ");
		gets(name);
	
		for (i = 0; i < SIZE; i++)
			if (strcmp(s[i].name, name) == 0) break;
		
		if (i == SIZE)
			printf("�ش� �̸��� ã�� �� �����ϴ�.\n");
		else //�˻��� �ش� �л��� ����, ���� ������ ��� ���
			printf("%s => ���� ���� : %d, ���� ���� : %d, ��� ���� : %5.1f\n", s[i].name, s[i].kor, s[i].eng, s[i].avg);
			//5.1f 5�ڸ� ��Ƽ� �Ҽ��� ���� �� �ڸ����� ǥ���� -> ���ʿ� �� �ڸ��� ��.
	}
	
	else if (menu == 4) { //���� �޸�, ���� �޸𸮸� �̿��� ������ �հ�� ��� ���ϱ� 
		int size;
   		int* arr = NULL; //���� �޸��� �ּҸ� ������ �����͸� �غ� 
   		int i, sum;
   		float avg; //��� 
		      
   		printf("\n������ ����? "); //���� ���� �Է� �ޱ� 
   		scanf("%d", &size);
   		//sizeof(int)*size ����Ʈ ���� �޸� �Ҵ� 
   		arr = (int*) malloc(sizeof(int) * size);
   		//malloc �Լ��� ���� �޸𸮸� �Ҵ��� �� ������ NULL�� ������ 
		if (arr == NULL) { //�޸� �Ҵ� ���� �� ���α׷� ����(������ ����) 
      		printf("���� �޸� �Ҵ� ����\n");
      		return -1;
   		}
   		
   		//�Է� ���� ���� ������ŭ �Է� �ޱ� 
		printf("%d���� ������ �Է��ϼ���: ", size);
   		for (i=0;i<size;i++) //���� �޸𸮸� ����Ű�� ������ arr�� 
      		scanf("%d", &arr[i]); //�迭ó�� ����� �� �ִ�. 
   		for (i=0, sum=0;i<size;i++)
      		sum += arr[i]; //�հ� 
   		avg = (float)sum / size; //��� 
   		printf("�Էµ� ������ �հ�: %d\n", sum); //�հ� �ⷰ 
   		printf("�Էµ� ������ ���: %.2f\n", avg); //��� ��� 
   		
   		//���� �޸𸮸� ������ �������� ���� �޸𸮸� ����Ű�� �����͸� �� �����ͷ� ����� ���� ������ 
   		free(arr); //����� ������ ���� �޸𸮸� ������ 
   		arr = NULL; //�޸� ���� �� �����͸� �� ����Ʈ�� ���� -> �����ص� ��
   		//���� �޸𸮸� �Ҵ��� ���� �����Ǿ�� �ϴ� ������ �Ǵ��ؼ� ���� �ڵ带 �Բ� �ۼ��ϴ� ���� ���� 
	}

}
