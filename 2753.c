//fastbooktech
//2022.02.14
//2753

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int year;
	scanf("%d", &year);
	int true = 1, false = 0;
	if ((year % 400 == 0)|| ((year % 100 != 0) && (year % 4 == 0))) {
		printf("%d", true);
	}
	else  {
		printf("%d", false);
	}
	return 0;
}