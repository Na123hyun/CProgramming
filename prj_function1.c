#include <stdio.h>
#include "prj_function.h"

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
