
//예비
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

//지금풀이 (위)

// 1년 전 풀이: 배열 만들어서 전부 다 저장 후 standard 와 비교해 작으면 출력
// 지금 풀이 : 별도로 저장 없이 조건에 해당하면 바로 출력.

//1년 전 풀이 (아래)
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