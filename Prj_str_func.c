#include <stdio.h>
#include <stdlib.h>

int stringLength(char *str) {
	int i = 0, len = 0;
	
	while (*(str + i) != '\0') {
		len++;
		i++;
	} 
	return len;
}

void reverseString(char *str, int size) {
	int i;
	
	printf("\n문자열 거꾸로 출력\n");
	for (i = size - 1; i >= 0; i--)
		printf("%c", *(str + i));
	printf("\n");
}
