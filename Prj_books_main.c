#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char books[5][30];
	int i = 0;
	
	for (i = 0; i < 5; i++) 
		gets(books[i]); // devC++���� scanf ����Ͽ� �Է� �޴� ����
		// gets_s(books[i], sizeof(books[0] -> visual studio 2022���� ����ϴ� �� 
	
	for (i = 0; i < 5; i++) {
		if (islower(books[1][0]))
			books[i][0] = toupper(books[i][0]);
	}
	
	puts("<< ���� �� >>");
	for (i = 0; i < 5; i++)
		printf("%s\n", books[i]);
	
}
