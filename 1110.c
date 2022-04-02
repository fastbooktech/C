//예비
//2022.02.18
//fastbooktech
//1110

//cnt = counting cycles
#define _CRT_SECURE_NO_WARNINGS
//ten=n%10;
//처음에 26은 제대로 되고, 55나 1은 기댓값인 3이나 60 대신 그보다 적은 값이나 무한루프를 돌았다. 이는 n<10인 조건에서 (문제에서 요구한 대로라면 ten이 0이 되어야한다. 앞에다 0붙인다고 했으므로) 뒤인 one에다가 무조건 0붙이는 로직으로 짰기때문. 이를 ten인 앞에다가 무조건 0붙이는걸로 수정했더니 정상작동한다.
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