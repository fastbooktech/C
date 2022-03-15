


//본
//2022.03. 14
//fastbooktech
//#5622

//다이얼 처음위치 돌아가는 시간 포함? 아닌듯.
/*
알파벳
ABC DEF .. PQRS tuv.. wxyZ
65 66 67 ..80.. 84 85 86   87 88 89 90
숫자
1 2 3 4 5 6 7 8 9 
시간
2 3 4 5 6 7 8 9 10

규칙
65    66   67   68   69   70  71   72
 2    0     1    2   0     1   2   0
*/
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char str[16] = { 0 };
	scanf("%s", str);
	int sum = 0;
	for (int i = 0; i < strlen(str); i++) {
		//abc~mno~65~80,
		if ((int)str[i] < 'P'){
			sum += ((str[i] - 'A')/3)+3;
			////abc
			//if (str[i] < 65+3*1)sum += 3;
			////def
			//else if (str[i] < 65+3*2)sum += 4;
			////ghi
			//else if (str[i] < 65+3*3)sum += 5;
			////jkl
			//else if (str[i] < 77)sum += 6;
			//else if (str[i] < 80)sum += 7;
		}
		//tuv
		else if ((str[i] > 'S')&&(str[i] < 'W')) {
			sum += 9;
		}
		//PQRS, WXYZ, OPERATOR, 공백
		else {
			//PQRS
			if (str[i] < 'T') {
				sum += 8;
				//sum += ((str[i] - 'P') / 4) + 1;
			}
			//wxyz
			else if (str[i] < 'Z'+1) {
				sum += 10;
				//sum += ((str[i] - 'W') / 4) + 1;
			}

		}
		
		

	}
	printf("%d", sum);
	return 0;
}
