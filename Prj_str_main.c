#include <stdio.h>
#include <stdlib.h>
#include "Prj_str_header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char sentence[100] = "";
	char word[20];
	int len;
	do {
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	}	while (strcmp(word, ".") != 0);
	
	printf("�Է¹��� ���ڿ� : %s, ���ڿ� ���� : %d\n", sentence, strlen(sentence));
	printf("���ڿ� ����(����� ���� �Լ�) : %d\n", stringLength(sentence));
	
	len = stringLength(sentence);
	reverseString(sentence, len);
}
