

//2022.02.23
//fastbooktech
//#3052

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//arr�� 0~9������ �� 10�� ����
	int arr[42] = {0}, input, cnt=0;
	for (int i = 0; i < 42; i++) {
		printf("%d", arr[i]);
	}
	//for������ �� �Է¹��� �� 42 ����ä�� arr�� ������Ʈ
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		for (int j = 0; j < 42; j++) {
			if (input % 42 == j) {
				arr[j]++;
			}
		}
	}

	//���� arr[i]>0�̸� cnt++�ؼ� cnt ���
	for (int i = 0; i < 42; i++) {
		if (arr[i] >=0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}