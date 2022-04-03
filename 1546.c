//¿¹ºñ
//2022.02.
//fastbooktech
//#1546

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, score, sum=0,M=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		if (M < score) {
			M = score;
		}
		sum += score;
	}
	printf("%lf", ((double)sum / M * 100)/n);
	return 0;
}