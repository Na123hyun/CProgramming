#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//202395004 �質�� 
int main(void) {
	
	int opt;
	double num1, num2;
	double result;
	
	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("����? ");
	scanf("%d", &opt);
	
	if(opt>=1 && opt<=4);
	{
		printf("�� ���� �Ǽ� �Է� : ");
		scanf("%lf %lf", &num1, &num2);
		
		if(opt==1)
			result = num1 + num2;
		else if(opt==2)
			result = num1 - num2;
		else if(opt==3)
			result = num1 * num2;
		else if(opt==4)
			result = num1 / num2;
			
		printf("��� : %g \n", result); 
	}
	else
		printf("��ȣ�� �ٽ� �����Ͻÿ�.");
		
	return 0;
}
