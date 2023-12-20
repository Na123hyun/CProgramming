#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char str_in[128];
	char str_out[128];
	int year, month, day;
	
	printf("³¯Â¥(yyyymmdd)? ");
	gets(str_in);
	skgus
	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);
	
	sprintf(str_out, "Due Date : %04d-%02d-%02d", year, month, day);
	puts(str_out);
	
	return 0;
}
