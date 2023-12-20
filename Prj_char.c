#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
//	char str[] = "Good morning!";
//	printf("배열 str의 크기 : %d\n", sizeof(str));
//	printf("널 문자 문장형 출력 : %c\n", str[13]);
//	printf("널 문자 정수형 출력 : %d\n", str[13]);
//	
//	//배열 str애 저장된 문자열 데이터 변경 가능 
//	str[12] = '?';
//	printf("문자열 출력 : %s\n", str);

	char str[50];
	int idx = 0;
	
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s\n", str); 

	printf("문자 단위 출력 : ");
	//입력 받은 문자가 널 문자가 아니라면 
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n널 문자를 뺀 문자열 길이 : %d\n", idx);
	
	return 0;
}
