//fastbooktech
//2022.02.14
//2884


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h, m;
	scanf("%d%d", &h, &m);
	int a1, a2;
	if (m >= 45) {
			a2 = m - 45;
			a1 = h;	
	}
	else {
		a2 = m + 15; //+60-45
		if (h == 0) {
			a1 = 23;
		}
		else {
			a1 = h-1;
		}

	}
	printf("%d %d", a1, a2);
	return 0;
}