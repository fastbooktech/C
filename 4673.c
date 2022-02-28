
//2022.02.28
//fastbooktech
//#4673
		
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

void calculate(int i);

struct array {
	int created;
	int createdNum;
};
struct array p[10001] = { 0 };

int main() {

	for (int i = 0; i < 10000; i++) {
		calculate(i);
		if ((p[i].createdNum == 0) && (i!=0)){
			printf("%d\n", i);
		}
	}
	return 0;
}

void calculate(int i) {
	if ((i >= 0) && (i < 10)) {
		p[i].created = i + i % 10;
		if (p[i].created != 0) {
			p[p[i].created].createdNum++;
		}
	}
	else if ((i >= 10) && (i < 100)) {
		p[i].created = i + i / 10 + i % 10;
		p[p[i].created].createdNum++;
	}
	else if ((i >= 100) && i < 1000) {
		p[i].created = i + i / 100 + (i % 100) / 10 + (i % 10);
		if (p[i].created < 10000) {
			p[p[i].created].createdNum++;
		}
	}
	else if ((i >= 1000) && i < 10000) {
		p[i].created = i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + (i % 10);
		if (p[i].created < 10000) {
			p[p[i].created].createdNum++;
		}
	}
}









////제출해서 맞음
	////원본코드
		//
		////본
		////2022.02.28
		////fastbooktech
		////#4673
		//
		//#define _CRT_SECURE_NO_WARNINGS
		//#include <stdio.h>
		//
		//// 배열구조체
		//// 배열 arr[0] arr[1] arr[75] arr[87]
		//// 생성자 0         1     87      87+8+7
		//// 생성자갯수 0     0      0       1
		//
		//struct array {
		//	int created;
		//	int createdNum;
		//};
		//
		////셀프넘버
		////if 생성자갯수 == 0, cnt++;
		//
		//int main() {
		//	struct array p[10001] = {0,};
		//	//0~9
		//	for (int i = 0; i < 10; i++) {
		//		p[i].created = i + i % 10;
		//		if ((p[i].created < 100) &&(p[i].created!=0)){
		//			p[p[i].created].createdNum++;
		//		}
		//	}
		//	//10~99
		//	for (int i = 10; i < 100; i++) {
		//		p[i].created = i + i/10+ i % 10;
		//		if (p[i].created < 1000) {
		//			p[p[i].created].createdNum++;
		//		}
		//	}
		//	//100~999
		//	for (int i = 100; i < 1000; i++) {
		//		p[i].created = i + i / 100 + (i % 100) /10 + (i % 10);
		//		if (p[i].created < 10000) {
		//			p[p[i].created].createdNum++;
		//		}
		//	}
		//	//1000~9999
		//	for (int i = 1000; i < 10000; i++) {
		//		p[i].created = i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + (i % 10);
		//		if (p[i].created < 10000) {
		//			p[p[i].created].createdNum++;
		//		}
		//	}
		//
		//
		//	for (int i =1; i < 10000; i++) {
		//		if (p[i].createdNum == 0) {
		//			printf("%d\n", i);
		//		}
		//	}
		//	return 0;
		//}