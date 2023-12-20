#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prj_space_function.c"
int main(void) {
	
	char str[64] = "this program ttests const pointer to string.\n";
	
	puts(str);
	printf("공백 문자의 개수 : %d\n", count_space(str));
}
