
//2022.02.18
//fastbooktech
//2439

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int j = 1; j < t + 1; j++) {
		for (int i = 0; i < t-j; i++) {
			printf(" ");
		}
		for (int k = 0; k < j; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

//1년전 내풀이

//달라진 점 : j를 0부터 시작해서 이중반복문 조건을 a-j가 아니라 a-j-1로 하나 더 빼줌

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int j = 0; j < a; j++) {
//		for (int i = 0; i < (a - j - 1); i++) {
//			printf(" ");
//		}
//		for (int k = 0; k < j + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
