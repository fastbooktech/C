//2525
//fastbooktech
	//2022.02.14
	//�������. ��_��
	//ó���� ���� �ð�, ���� 24�� 60�̶� �ð� ü�迡 ���ߴ� �ɷ� ��Ӹ��� �δٰ� �ű⿡ ���ο� �ð��� ���ؾ��ؼ� ���ϰ� ���� �ǰ���������� ���� �ѹ��� ���� ���ϰ� ����ؾ߰ڴٴ� ���̵��� Ǯ���µ� ���ѰͰ���.
//���� ����
	//h : hour m : minute add
	//a1 : answer1 a2 : answer2

//�ڵ� ���� ���� ����
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

// �����ڵ� ��������
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

//Ʋ���ڵ�
//int main() {
//	int h, m, add;
//	int a1, a2;
//
//	scanf("%d%d%d", &h,&m,&add);
//	if (m+add%60 < 60) {
//		a1 = h + add / 60;
//		a2 = m + add;
//	}
//	else {// add/60�� ���ҽð�, add%60�� ���� ��
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
