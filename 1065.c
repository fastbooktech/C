

//본
//2022.03. 04
//fastbooktech
//#1065

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, cnt=0;
int hansu(int n) {
	int first, second, third;
	//재귀함수 종료조건
	if (n == 1) {
		cnt++;
		return cnt;
	}
	if ((n <= 99)&&(n!=0)) {
		cnt++;
	}
	else {
		first = n / 100;
		second = (n % 100) / 10;
		third = n % 10;
		//출력시, double을 덧셈 하나에 붙이든, 모두 붙이든, 나눗셈을 하든 같으나 %d로 출력시 0처리됨. 0.
		if (((double)first + (double)third) / 2 == (double)second) {
			cnt++;
		}
	}
	return hansu(n-1);
}

int main() {
	scanf("%d", &n);
	printf("%d", hansu(n));

	return 0;
}