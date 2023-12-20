#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//망할! 
int main(void) {
	
//	char books[1][30];
	int i = 0;
	
	printf("문자열? ");
	for (i = 0; i < 2; i++) 
		gets(books[i]); // devC++에서 scanf 대신하여 입력 받는 문자
		// gets_s(books[i], sizeof(books[0] -> visual studio 2022에서 사용하는 것 
	
	for (i = 0; i < 2; i++) {
		if (islower(books[i][]))
			books[i][] = toupper(books[i][]);
			
		else if (toupper(books[i][]))
			books[i][] = islower(books[i][]);
	}
	
	puts("변환 후 : ");
	for (i = 0; i < 2; i++)
		printf("%s\n", books[i]);
	
}
