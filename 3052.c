

//2022.02.23
//fastbooktech
//#3052

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//arr로 0~9까지의 수 10개 저장
	int arr[42] = {0}, input, cnt=0;
	for (int i = 0; i < 42; i++) {
		printf("%d", arr[i]);
	}
	//for문으로 수 입력받은 뒤 42 나눈채로 arr에 업데이트
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		for (int j = 0; j < 42; j++) {
			if (input % 42 == j) {
				arr[j]++;
			}
		}
	}

	//만약 arr[i]>0이면 cnt++해서 cnt 출력
	for (int i = 0; i < 42; i++) {
		if (arr[i] >=0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}