

//¿¹ºñ
//2022.02.18
//fastbooktech
//2438

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int j = 1; j < t+1; j++) {
		for (int i = 0; i < j; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}