//푸는데.. %s를 한번에 받아서 arr로 끊는거 생각중에 멈춤
//예비
//2022.02.23
//fastbooktech
//#8958


//코드 정리
	//res: 점수, cnt : 연속여부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int res = 0, cnt = 1;
int calculate(char a) {
	if (a == 'O') {
		res += cnt;
		cnt++;
	}
	else {
		cnt = 1;
	}
	return res;
}

int main() {
	int input;
	scanf("%d", &input);
	char arr[80];
	for (int i = 0; i < input; i++) {
		res = 0, cnt = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			calculate(arr[j]);
		}
		printf("%d\n", res);
	}

	return 0;
}


	////맞은 코드
	//int res = 0, cnt = 1;
	//int calculate(char a) {
	//	//score : 점수, cnt : 연속여부
	//	if (a == 'O') {
	//		res += 1 *cnt;
	//		cnt++;
	//	}
	//	else {
	//		cnt = 1;
	//	}
	//	return res;
	//}
	//
	//int main() {
	//	int input;
	//	scanf("%d", &input);
	//	char arr[80];
	//	for (int i = 0; i < input; i++) {
	//		res = 0, cnt = 1;
	//		scanf("%s", arr);
	//		for (int j = 0; j < strlen(arr); j++) {
	//			calculate(arr[j]);
	//		}
	//		printf("%d\n", res);
	//	}
	//	
	//	return 0;
	//}

//시도 
//int main() {
//	int input;
//	scanf("%d", &input);
//	char arr[80];
//	for (int i = 0; i < input; i++) {
//		scanf("%s", arr);
//		printf("%c",arr[i]);
//		//for (int j = 0; j < strlen(arr); j++) {
//
//		//	printf("%c", arr[j]);
//		//}
//	}
//	return 0;
//}

//시도2
//int main() {
//	int input;
//	scanf("%d", &input);
//	char arr;
//	for (int i = 0; i < input; i++) {
//		scanf("%s", arr);
//		while ((strlen(arr) != EOF) {
//			calculate(arr[]);
//		};
//
//	}
//	return 0;
//}





