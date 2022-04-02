
//¿¹ºñ
//2022.02.18
//fastbooktech
//11021

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 1; i < t+1; i++) {
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d\n",i, a + b);
	}

	return 0;
}
