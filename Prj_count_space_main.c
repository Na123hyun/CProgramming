#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prj_space_function.c"
int main(void) {
	
	char str[64] = "this program ttests const pointer to string.\n";
	
	puts(str);
	printf("���� ������ ���� : %d\n", count_space(str));
}
