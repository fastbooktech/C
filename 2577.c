
//예비
//2022.02.20
//fastbooktech
//#2577

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[10] = { 0 };
void check(int mult) {
	if (mult == 0) {
		arr[0]++;
	}
	else if (mult == 1) {
		arr[1]++;
	}
	else if (mult == 2) {
		arr[2]++;
	}
	else if (mult == 3) {
		arr[3]++;
	}
	else if (mult == 4) {
		arr[4]++;
	}
	else if (mult == 5) {
		arr[5]++;
	}
	else if (mult == 6) {
		arr[6]++;
	}
	else if (mult == 7) {
		arr[7]++;
	}
	else if (mult == 8) {
		arr[8]++;
	}
	else if (mult == 9) {
		arr[9]++;
	}
}

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int mult = a * b * c;
	while ((mult / 10) != 0) {
		check(mult % 10);
		mult = mult / 10;
	}
	check(mult % 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int arr[10] = { 0 };
//int check(int mult) {
//	if (mult == 1) {
//		arr[0]++;
//	}
//	else if (mult == 2) {
//		arr[1]++;
//	}
//	else if (mult == 3) {
//		arr[2]++;
//	}
//	else if (mult == 4) {
//		arr[3]++;
//	}
//	else if (mult == 5) {
//		arr[4]++;
//	}
//	else if (mult == 6) {
//		arr[5]++;
//	}
//	else if (mult == 7) {
//		arr[6]++;
//	}
//	else if (mult == 8) {
//		arr[7]++;
//	}
//	else if (mult == 9) {
//		arr[8]++;
//	}
//
//	if (mult / 10 == 0) {
//		return mult;
//	}
//
//	return mult%10;
//}
//
////1000000 최소 900000000 포함  997002999 최대
//
//int main() {
//	int a, b, c;
//	scanf("%d%d%d",&a, &b, &c);
//	int mult = a * b * c;
//	check(mult);
//
//	for (int i = 0; i < 9; i++) {
//		printf("%d", arr[i]);
//	}
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int arr[10] = { 0 };
//void check(int mult) {
//	if (mult == 0) {
//		arr[0]++;
//	}
//	else if (mult == 1) {
//		arr[1]++;
//	}
//	else if (mult == 2) {
//		arr[2]++;
//	}
//	else if (mult == 3) {
//		arr[3]++;
//	}
//	else if (mult == 4) {
//		arr[4]++;
//	}
//	else if (mult == 5) {
//		arr[5]++;
//	}
//	else if (mult == 6) {
//		arr[6]++;
//	}
//	else if (mult == 7) {
//		arr[7]++;
//	}
//	else if (mult == 8) {
//		arr[8]++;
//	}
//	else if (mult == 9) {
//		arr[9]++;
//	}
//}
//
////1000000 최소 900000000 포함  997002999 최대
//
//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int mult = a * b * c;
//	//printf("%d는 곱한값\n", mult);
//	while ((mult / 10) != 0) {
//		check(mult%10);
//		//printf("%d는 mult 10나머지값\n", mult%10);
//		mult = mult / 10;
//		//printf("%d는 재귀이후 mult 나누기 10\n", mult);
//	}
//	check(mult % 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}