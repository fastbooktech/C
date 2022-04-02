
//fastbooktech
//2022.02.14
//14681

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main() {
//	int x, y;
//	int answer;
//	scanf("%d %d", &x, &y);
//	if ((x > 0) && (y > 0)) {
//		answer=1;
//	}
//	if ((x < 0) && (y > 0)) {
//		answer = 2;
//	}
//	if ((x < 0) && (y < 0)) {
//		answer = 3;
//	}
//	if ((x > 0) && (y < 0)) {
//		answer = 4;
//	}
//	printf("%d", answer);
//	return 0;
//}

#include <stdio.h>
int main() {
	int x, y;
	int answer;
	scanf("%d%d", &x, &y);
	if ((x > 0) && (y > 0)) {
		answer = 1;
	}
	else if ((x < 0) && (y > 0)) {
		answer = 2;
	}
	else if ((x < 0) && (y < 0)) {
		answer = 3;
	}
	else if ((x > 0) && (y < 0)) {
		answer = 4;
	}
	printf("%d", answer);
	return 0;
}