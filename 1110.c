//����
//2022.02.18
//fastbooktech
//1110

//cnt = counting cycles
#define _CRT_SECURE_NO_WARNINGS
//ten=n%10;
//ó���� 26�� ����� �ǰ�, 55�� 1�� ����� 3�̳� 60 ��� �׺��� ���� ���̳� ���ѷ����� ���Ҵ�. �̴� n<10�� ���ǿ��� (�������� �䱸�� ��ζ�� ten�� 0�� �Ǿ���Ѵ�. �տ��� 0���δٰ� �����Ƿ�) ���� one���ٰ� ������ 0���̴� �������� ®�⶧��. �̸� ten�� �տ��ٰ� ������ 0���̴°ɷ� �����ߴ��� �����۵��Ѵ�.
#include <stdio.h>

//
int main() {
	int n, ten, one,cnt=0,new=100;
	scanf("%d", &n);
	
	new = n;
	while (1) {
		cnt++;
		if (n < 10) {//5
			ten = 0;
			//ten=n%10;
			one = n % 10;
		}
		//55
		else {
			ten = n / 10;//5 //5
			one = n % 10;//5 //0
		}
		n = one * 10 + ((ten + one) % 10);//n=50//5
		if (new == n) {
			break;
		}
	}
	printf("%d", cnt);

	return 0;
}