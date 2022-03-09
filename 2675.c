

//º»
//2022.03.09
//fastbooktech
//#2675

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void printing(char S[21], int R) {
	for (int i = 0; i < strlen(S); i++) {
		for (int j = 0; j < R; j++) {
			printf("%c", S[i]);
		}
	}

	return 0;
}
int main() {
	char S[21];

	int T, R;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		if (i != 0) {
			printf("\0");
			printf("\0");
		}
		scanf("%d", &R);
		scanf("%s", S);

		printing(S, R);

	}
	return 0;
}