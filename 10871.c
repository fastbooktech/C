
//����
//2022.02.18
//fastbooktech
//10871

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, standard, input;
	scanf("%d%d", &num,&standard);

	for (int i = 0; i < num; i++) {
		scanf("%d", &input);
		if (input < standard) {
			printf("%d",input);
		}

	}

	return 0;
}

//����Ǯ�� (��)

// 1�� �� Ǯ��: �迭 ���� ���� �� ���� �� standard �� ���� ������ ���
// ���� Ǯ�� : ������ ���� ���� ���ǿ� �ش��ϸ� �ٷ� ���.

//1�� �� Ǯ�� (�Ʒ�)
#include<stdio.h>
int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if ((arr[i] < x)) {

            printf("%d ", arr[i]);
        }
    }
    return 0;
}