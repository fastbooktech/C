//fastbooktech
//10430

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d\n",(a+b)%c,(a%c+b%c)%c, (a*b)%c, (((a%c)*(b%c))%c));
	return 0;
}

//�ڵ� ���ü��� ���� ���� ������ ����� ���� ������ ����ϴ°� ������, �ƴϸ� ����ó�� ���ٷ� �ڵ���̸� ���̴°� ������ �𸣰ڴ�.