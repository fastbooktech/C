
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

//1���� ��Ǯ��

//�޶��� �� : j�� 0���� �����ؼ� ���߹ݺ��� ������ a-j�� �ƴ϶� a-j-1�� �ϳ� �� ����

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
