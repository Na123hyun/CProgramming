#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//컴퓨터공학부 202395004 김나현 

int main(void) {
	
	int menu, num;
	
	printf("\n메뉴\n"); //메뉴의 첫 시작 
	//메뉴 -> 배열, 포인터, 구조체, 동적 메모리, 프로그램 종료 
	printf("<1> 배열  <2> 포인터 <3> 구조체 <4> 동적 메모리 <5> 프로그램 종료 : "); 
	scanf("%d", &menu); //선택 입력 받기 
		
	switch (menu) { //switch문으로 case 중 하나를 선택하여 문장을 수행함 
		case 1 : //배열 
			printf("배열을 선택하셨습니다.\n");
			break; //case에서 수행할 문장의 끝에는 break를 써줌 
			//switch 안에서 break를 만나면 switch를 탈출함 
			//break가 없으면 switch의 끝(})을 만날 때까지 나열된 모든 문장을 수행함 
		case 2 :
			printf("포인터를 선택하셨습니다.\n");
			break;
		case 3 :
			printf("구조체를 선택하셨습니다.\n");
			break;
		case 4 :
			printf("동적 메모리를 선택하셨습니다.\n");
			break;
		default : //일치하는 case가 없을 때 수행할 문장은 default에 씀 
			printf("프로그램 종료\n");
			break; //default에서 수행할 문장의 끝에도 break가 필요함 
	}
	
	if (menu == 1) { //배열, 배열의 바이트 크기와 배열의 크기 구하기 
		int arr[5]; //크기가 5인 int 배열을 선언 
		int size = 0; //배열의 크기(원소의 개수)를 저장할 변수 
		int i;
		
		//배열 전체의 바이트 크기 
		printf("\n배열의 바이트 크기 : %d\n", sizeof(arr));
		
		//sizeof 연산자를 이용하면 배열의 크기(원소의 개수)를 구할 수 있음 
		//sizeof(arr) / sizeof(arr[0])은 arr 배열의 크기가 됨 
		size = sizeof(arr) / sizeof(arr[0]); //배열의 크기(원소의 개수) 
		printf("배열의 크기 : %d\n", size);
		
		//배열은 반복문, 특히 for문과 함께 사용되는 경우가 많음 
		for (i = 0; i < size; i++) //배열은 주로 for문과 함께 사용함 
			arr[i] = 0; //배열의 원소(arr[i])에 0을 대입 
		for (i = 0; i < size; i++)
			printf("%d", arr[i]); //배열의 원소 출력 
		printf("\n");
	}
	
	else if (menu == 2) { //포인터, 포인터의 바이트 크기 구하기 
		//포인터 선언 시 사용된 데이터형은 포인터가 가리키는 변수의 데이터형임 
		int *pi; //*는 수식어, 다음에 나오는 변수를 포인터로 선언함 
		double *pd; //포인터의 크기는 데이터형에 관계없이 항상 같음 
		char *pc;
		 
		//포인터의 크기 구하기 
		printf("\nsizeof(pi) = %d\n", sizeof(pi));
		printf("sizeof(pd) = %d\n", sizeof(pd));
		printf("sizeof(pc) = %d\n", sizeof(pc));
		
		//포인터형의 크기 구하기 
		printf("sizeof(int*) = %d\n", sizeof(int*));
		printf("sizeof(double*) = %d\n", sizeof(double*));
		printf("sizeof(char*) = %d\n", sizeof(char*));
	}
	
	else if (menu == 3) { //구조체 배열, 구조체 배열을 사용하여 5명 학생의 국어, 영어 점수를 입력 받고, 
		struct student { //학생 한명을 검색하여 평균 구하기 
			char name[40];
			int kor; //국어 
			int eng; //영어 
			float avg; //평균 
		}; //구조체
		//구조체 배열을 초기화하려면 {} 안에 배열 원소의 초기값을 나열함 
		
		int i;
		char name[10];
		//구조체 배열을 선언하려면, 배열 이름을 쓰고 [] 안에 배열의 크기를 지정한다. 
		struct student s[SIZE]; //크기는 5 
	
		for (i=0; i<SIZE; i++) {
			printf("\n--- %d 번째 ---\n", i+1); //학생 5명 입력받기 
			printf("이름 : ");
			scanf("%s", s[i].name); //이름 
			printf("국어 점수 : ");
			scanf("%d", &s[i].kor); //국어 점수 
			printf("영어 점수 : ");
			scanf("%d", &s[i].eng); //영어 점수 
		
			s[i].avg = (s[i].kor + s[i].eng) / 2.0f; //평균 
		}
	
		fflush(stdin); //dev C++에서 사용 
		printf("\n검색할 이름 : ");
		gets(name);
	
		for (i = 0; i < SIZE; i++)
			if (strcmp(s[i].name, name) == 0) break;
		
		if (i == SIZE)
			printf("해당 이름을 찾을 수 없습니다.\n");
		else //검색한 해당 학생의 국어, 영어 점수와 평균 출력
			printf("%s => 국어 점수 : %d, 영어 점수 : %d, 평균 점수 : %5.1f\n", s[i].name, s[i].kor, s[i].eng, s[i].avg);
			//5.1f 5자리 잡아서 소수점 이하 한 자리까지 표시함 -> 왼쪽에 한 자리가 빔.
	}
	
	else if (menu == 4) { //동적 메모리, 동적 메모리를 이용한 정수의 합계와 평균 구하기 
		int size;
   		int* arr = NULL; //동적 메모리의 주소를 저장할 포인터를 준비 
   		int i, sum;
   		float avg; //평균 
		      
   		printf("\n정수의 개수? "); //정수 개수 입력 받기 
   		scanf("%d", &size);
   		//sizeof(int)*size 바이트 동적 메모리 할당 
   		arr = (int*) malloc(sizeof(int) * size);
   		//malloc 함수는 동적 메모리를 할당할 수 없으면 NULL을 리턴함 
		if (arr == NULL) { //메모리 할당 실패 시 프로그램 종료(비정상 종료) 
      		printf("동적 메모리 할당 실패\n");
      		return -1;
   		}
   		
   		//입력 받은 정수 개수만큼 입력 받기 
		printf("%d개의 정수를 입력하세요: ", size);
   		for (i=0;i<size;i++) //동적 메모리를 가리키는 포인터 arr를 
      		scanf("%d", &arr[i]); //배열처럼 사용할 수 있다. 
   		for (i=0, sum=0;i<size;i++)
      		sum += arr[i]; //합계 
   		avg = (float)sum / size; //평균 
   		printf("입력된 정수의 합계: %d\n", sum); //합계 출럭 
   		printf("입력된 정수의 평균: %.2f\n", avg); //평균 출력 
   		
   		//동적 메모리를 해제한 다음에는 동적 메모리를 가리키던 포인터를 널 포인터로 만드는 것이 안전함 
   		free(arr); //사용이 끝나면 동적 메모리를 해제함 
   		arr = NULL; //메모리 해제 후 포인터를 널 포인트로 만듬 -> 생략해도 됨
   		//동적 메모리를 할당할 때는 해제되어야 하는 시점을 판단해서 해제 코드를 함께 작성하는 것이 좋음 
	}

}
