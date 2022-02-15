
//fastbooktech
//2022.02.15
// 2480

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int reward;
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	if ((a == b) && (b == c)) {
		reward = 10000 + 1000 * a;
	}
	if (((a==b)&&(a!=c))&&(b!=c)) {
		reward = 1000 + a * 100;
	}
	if (((a != b) && (a == c)) && (b != c)) {
		reward = 1000 + a * 100;
	}
	if (((a != b) && (a != c) )&& (b == c)) {
		reward = 1000 + b * 100;
	}
	if(((a!=b)&&(b!=c))&&(a!=c)) {
		if (((a > b) && (b > c)) || ((a > c) && (c > b))){
			reward = a*100;
		}
		if (((b > c) && (c > a) )|| ((b > a) && (a > c))){
			reward = b*100;
		}
		if (((c > b) && (b > c))||( (c > a) && (a > b))){
			reward = c*100;
		}
	}
	printf("%d", reward);
	return 0;
}

