#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����! 
int main(void) {
	
//	char books[1][30];
	int i = 0;
	
	printf("���ڿ�? ");
	for (i = 0; i < 2; i++) 
		gets(books[i]); // devC++���� scanf ����Ͽ� �Է� �޴� ����
		// gets_s(books[i], sizeof(books[0] -> visual studio 2022���� ����ϴ� �� 
	
	for (i = 0; i < 2; i++) {
		if (islower(books[i][]))
			books[i][] = toupper(books[i][]);
			
		else if (toupper(books[i][]))
			books[i][] = islower(books[i][]);
	}
	
	puts("��ȯ �� : ");
	for (i = 0; i < 2; i++)
		printf("%s\n", books[i]);
	
}
