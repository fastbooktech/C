

//2022.02.18
//fastbooktech
//8393

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b=0;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		b = b + i;
	}
	printf("%d", b);
	return 0;
}