
//
//2022.03.02
//fastbooktech
//#15596

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ �迭 �� ���� n���� ���̴�.
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}

