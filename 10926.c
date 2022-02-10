//fastbooktech

//10926 응용 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char answer[7] = "joonas";

int check(char input[]) {
	if (strcmp(input,answer)==0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	char input[51];
	scanf("%s", &input);

	if (check(input)== 1) {
		printf("%s??!", answer);
	}
	else {
		printf("%s", input);
	}

	return 0;
}
//10926 정답 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char input[51];
	scanf("%s", &input);

		printf("%s??!", input);
	return 0;
}