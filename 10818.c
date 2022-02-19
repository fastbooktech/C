//2022.02.19
//10818
//fastbooktech

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, M = -1000001, m = 1000001, input;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &input);
		if (M < input) {
			M = input;
		}

		if (m > input) {
			m = input;
		}

	}
	printf("%d %d", m, M);
	return 0;
}
