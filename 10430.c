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

//코드 가시성을 위해 따로 변수를 만들고 줄을 내려서 출력하는게 나은지, 아니면 지금처럼 한줄로 코드길이를 줄이는게 나은지 모르겠다.
