#include <stdio.h>
#include "Prj_arr.h"
#define MAX 5

int sumArr() {
	int i, sum = 0;
	
	for (i = 0; i < MAX; i++) {
		sum += arr[i];
	}
	return sum;
}
