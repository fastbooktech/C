

//��
//2022.03. 13
//fastbooktech
//#2908


//�ѵ��ϴ�! ��ͷ� �� Ǭ�� ����!!!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ans = 0;
int input1=0, input2 = 0;
int sangsu(int a, int b) {
	//�������� ����� ���� ���п� break ������ �����ʿ�x
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


//Np ���� a/10�ϰ� %10�ѰŶ� a/10%10�� �ٸ��Ŷ�� �����ߴµ� 10%10�� ���� ���� �˾���
//�ٵ� /�� %�� * ���� ������ �켱���� ���Ƽ� ���������
//����� ++�� %�� / ���� �켱�ε� a++*10�� a������ *10�ϰ� ���ֿ� ++�Ͽ� a������


//��ͷ� Ǯ���� �ô��� print���� ans ��ſ� %d%d%d�� ����ϰԵǰ� �����̻����
//���ڿ��� �޾ƺ��� �׷���? ��ư return������ ���� a.b.���� �����ؾ��ϱ⶧����..

//�����ڵ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
////��ͷ� Ǯ���� �ô��� print���� ans ��ſ� %d%d%d�� ����ϰԵǰ� �����̻����
////���ڿ��� �޾ƺ��� �׷���? ��ư return������ ���� a.b.���� �����ؾ��ϱ⶧����..
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

