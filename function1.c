#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//main함수 아래 함수를 정의한 경우에만 
//사용자 정의 함수의 원형( 프로토타입) 선언
//int add1(int a, int b);
//void add2(int a, int b);
//int add3();
void add4();

int main(void) {
	
//	int result;
//	//함수 호출
//	result = add1(2, 3);
//	printf("함수 유형1 호출 : %d\n", result);
	
	printf("함수 유형1 호출 : %d\n", add1(2, 3));
	add2(10, 3);
	printf("함수 유형3 호출 : %d\n", add3());
	add4();
	return 0;
}

//매개변수와 변환 값이 있다. 
int add1(int a, int b) {
//	int result;
//	result = a + b;
//	return result;
	return a + b; 
} 

//반환 값이 없다. 
void add2(int a, int b) {
	printf("함수 유형2 출력 : %d\n", a + b);
} 

//매개변수가 없다. 
int add3() {
	//지역 변수 
	int a = 10, b = 3;
	return a + b; 
} 

//매개변수와 변환 값이 없다. 
void add4() {
	//지역 변수 
	int a = 10, b = 3;
	printf("함수 유형4 출력 : %d\n", a + b);
} 
