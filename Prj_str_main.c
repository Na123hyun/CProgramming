#include <stdio.h>
#include <stdlib.h>
#include "Prj_str_header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char sentence[100] = "";
	char word[20];
	int len;
	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	}	while (strcmp(word, ".") != 0);
	
	printf("입력받은 문자열 : %s, 문자열 길이 : %d\n", sentence, strlen(sentence));
	printf("문자열 길이(사용자 정의 함수) : %d\n", stringLength(sentence));
	
	len = stringLength(sentence);
	reverseString(sentence, len);
}
