

//2022.02.20
//2562
//fastbooktech

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[9];
	int M = 1, cnt = 0;;
	for (int i =0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > M) {
			M = arr[i];
			cnt = i+1;
		}
	}
	printf("%d\n%d", M, cnt);
	return 0;
}
