//2525
//fastbooktech
	//2022.02.14
	//어려웠다. ㅠ_ㅠ
	//처음엔 원래 시간, 분은 24와 60이란 시계 체계에 맞추는 걸로 골머리를 앓다가 거기에 새로운 시간을 더해야해서 더하고 나서 또고려하지말고 차라리 한번에 먼저 더하고 고려해야겠다는 아이디어로 풀었는데 잘한것같다.
//변수 설명
	//h : hour m : minute add
	//a1 : answer1 a2 : answer2

//코드 길이 줄인 버전
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m, add;

	scanf("%d%d%d", &h, &m, &add);
	h = h + add / 60; //17+1
	m = m + add % 60; // 40+20

	if (m < 60) {
		if (h >= 24) {
			h = h - 24;
		}
	}
	else {
		h = h + m / 60;
		m = m % 60;
		if (h >= 24) {
			h = h - 24;
		}
	}
	printf("%d %d",h,m);
	return 0;
}

// 정답코드 원래버전
//int main() {
//	int h, m, add;
//	int a1, a2;
//
//	scanf("%d%d%d", &h, &m, &add);
//	h = h + add / 60; //17+1
//	m = m + add % 60; // 40+20
//
//	if (m < 60) {
//		a1 = h;
//		if (a1 >= 24) {
//			a1 = h - 24;
//			a2 = m;
//		}
//		else {
//			a1 = h;
//			a2 = m;
//		}
//	}
//	else {
//		a1 = h + m / 60;//18+1
//		a2 = m % 60;
//
//		if (a1 >= 24) {
//			a1 = a1 - 24;
//			a2 = a2;
//		}
//		else {
//			a1 = a1;
//			a2 = a2;
//		}
//
//	}
//
//
//	printf("%d %d", a1, a2);
//	return 0;
//}

//틀린코드
//int main() {
//	int h, m, add;
//	int a1, a2;
//
//	scanf("%d%d%d", &h,&m,&add);
//	if (m+add%60 < 60) {
//		a1 = h + add / 60;
//		a2 = m + add;
//	}
//	else {// add/60은 더할시간, add%60은 더할 분
//		if (h == 23) {
//			a1 = 0 + add / 60-1;
//			a2 = m + add % 60;
//		}
//		else {
//			a1 = h+add / 60;
//			a2 = m + add % 60;
//		}
//	}
//	printf("%d %d", a1, a2);
//	return 0;
//}
