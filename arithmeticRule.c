

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number = 0;
int counting(int n) {
	if (n == 0) {
		return number;
	}
	number++;
	return counting(n / 10);
}

int arithmetic(int n, int number) {
	int temp = n, temp2 = n;
	if ((number == 0) || n == 0) {
		return 1;
	}
	if (temp / 10 % 10 - temp % 10 == temp / 10 / 10 % 10 - temp / 10 % 10) {
		return arithmetic(n / 10, number - 1);
	}

}

int main() {
	scanf("%d", &n);
	counting(n);
	if (arithmetic(n, number) == 1) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 0;
}