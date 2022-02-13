//fastbooktech
//2022.02.13
//2588

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//코드 정리 버전
int main() {
	//1. 두 수 입력
	int input1, input2;
	scanf("%d %d", &input1, &input2);

	//2. 일, 십, 백의자리 변수 정의
	int inputOne = input2 % 10;
	int inputTen = (input2 % 100) / 10;
	int inputHund = input2 / 100;

	//3. 구하려는 값
	int ans1 = input1 * inputOne;
	int ans2 = input1 *inputTen;
	int ans3 = input1 * inputHund;
	int ans4 = ans1 + ans2*10 + ans3*100;

	//4. 결과 출력
	printf("%d\n%d\n%d\n%d\n", ans1, ans2, ans3, ans4);
	return 0;
}

//원래 코드
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	//일의자리 %10
//	int c = a * (b % 10);
//	//십의자리 %100/10
//	int d = a * ((b % 100)/10);
//	//백
//	int e = a * (b/100);
//	//최종
//	int f = c + 10 * d + 100 * e;
//	printf("%d\n%d\n%d\n%d\n", c, d, e, f);
//	//
//	return 0;
//}

////코드 길이 줄인 버전
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n%d\n%d\n%d\n", a * (b % 10), a * ((b % 100) / 10), a * (b / 100), a * (b % 10) + 10 * (a * ((b % 100) / 10)) + 100 * (a * (b / 100)));
//	return 0;
//}
