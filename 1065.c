

//��
//2022.03. 04
//fastbooktech
//#1065

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, cnt=0;
int hansu(int n) {
	int first, second, third;
	//����Լ� ��������
	if (n == 1) {
		cnt++;
		return cnt;
	}
	if ((n <= 99)&&(n!=0)) {
		cnt++;
	}
	else {
		first = n / 100;
		second = (n % 100) / 10;
		third = n % 10;
		//��½�, double�� ���� �ϳ��� ���̵�, ��� ���̵�, �������� �ϵ� ������ %d�� ��½� 0ó����. 0.
		if (((double)first + (double)third) / 2 == (double)second) {
			cnt++;
		}
	}
	return hansu(n-1);
}

int main() {
	scanf("%d", &n);
	printf("%d", hansu(n));

	return 0;
}