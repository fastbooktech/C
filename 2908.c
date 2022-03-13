

//본
//2022.03. 13
//fastbooktech
//#2908


//뿌듯하다! 재귀로 잘 푼것 같다!!!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ans = 0;
int input1=0, input2 = 0;
int sangsu(int a, int b) {
	//같지않은 수라는 가정 덕분에 break 별도로 설정필요x
	if (a % 10 > b % 10) {
		return ans = (input1 % 10) * 100 + (input1/ 10 % 10) * 10 + (input1 / 100);
	}
	else if (b % 10 > a % 10) {
		return ans = (input2 % 10) * 100 + (input2 / 10 % 10) * 10 + (input2 / 100);
	}
	else {
		sangsu(a / 10, b / 10);
	}
	return ans;
}
int main() {
	scanf("%d %d", &input1, &input2);
	printf("%d", sangsu(input1,input2));
	return 0;
}


//Np 나는 a/10하고 %10한거랑 a/10%10이 다를거라고 생각했는데 10%10이 먼저 될줄 알았음
//근데 /랑 %랑 * 셋이 연산자 우선순위 같아서 순서대로임
//참고로 ++이 %나 / 보다 우선인뎅 a++*10은 a에먼저 *10하고 나주에 ++하여 a에대입


//재귀로 풀려고 봤더니 print에서 ans 대신에 %d%d%d로 출력하게되고 공백이생길듯
//문자열로 받아볼걸 그랬나? 암튼 return값에서 이전 a.b.값을 보존해야하기때문에..

//맞은코드
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
////재귀로 풀려고 봤더니 print에서 ans 대신에 %d%d%d로 출력하게되고 공백이생길듯
////문자열로 받아볼걸 그랬나? 암튼 return값에서 이전 a.b.값을 보존해야하기때문에..
//
//int ans = 0;
//int sangsu(int a, int b) {
//	if (a % 10 > b % 10) {
//		return ans = (a % 10)*100+(a/10%10)*10+(a/100);
//	}
//	else if (b % 10 > a % 10) {
//		return ans = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);
//	}
//	else {
//		if (a/10 % 10 > b/10 % 10) {
//			return ans = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
//		}
//		else if (b/10 % 10 > a/10 % 10) {
//			return ans = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);
//		}
//		else {
//			if (a / 100 > b / 100) {
//				return ans = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
//			}
//			else if (b / 100 > a / 100) {
//				return ans = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);
//			}
//		}
//	}
//	return ans;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d",sangsu(a, b));
//	return 0;
//}

