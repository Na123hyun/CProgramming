#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point {
	int x, y;
};

void print_point(struct point *pt);

int main(void) {
	struct point arr[] = {
		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4, 27}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	
	for (i = 0; i < size; i++) {
		print_point(&arr[i]);
	}
	printf("\n");
}

void print_point(struct point *ptr) {
	printf("(%d, %d) ", ptr->x, ptr->y);=
}
