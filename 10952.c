//2022.02.22
//fastbooktech
//10952

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;

	do{
		scanf("%d%d", &a, &b);
		if (a != 0 && b != 0) {
			printf("%d\n", a + b);
		
		}

	} while (a != 0 && b != 0);
	return 0;
}

//�ٸ� Ǯ�� (reference : @jychoi9712)
//���� 0���� Ȯ���ϱ� ���� �ϴ� �Է¹޴� �ڵ尡 �ʿ��ؼ� while ��� do while�� ������ �ѹ� ����ǰ� �ϰ�, ��� 0,0�� �� ó�� �Էµ� ��츦 ����Ͽ� + ���߿� �ԷµǴ��� 0,0�϶� �ƹ��͵� ��µ��� �ʰ� �ϱ� ���� if�� ���
//�� �ڵ�� ���ʿ� while(1)�� ���� ������ �ݺ��Ѵ�, break ������ ������ ������!�� ���α׷��� ����� 0,0 �� ���� break �ϵ� �ƴ� ���� �׻� ����ϴ� �ڵ�. �ξ� �����ϰ� ������ �˸´�.
//
//#include<stdio.h>
//
//int main() {
//	int a, b;
//
//	while (1) {
//		scanf("%d %d", &a, &b);
//		if (a == 0 && b == 0)
//			break;
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//�ٸ� Ǯ�� 2 ( reference : @	thstjdtn214)
//�� �ڵ�� 0,0�϶� �����ϴ°� �� �� ��ü�� 0���� Ȯ���ϴ°� �ƴ϶� ���� ���ؼ� 0�� �������� ǰ. ���� ������ �����ߴٸ� �ش� ������ ���ܷ� ���� ������ ��������. �ٵ� int ���� ���� �����̶� ����� �� ����.
//����� C#��
//using static System.Console;
//
//class Program
//{
//	static void Main(string[] args)
//	{
//		while (true)
//		{
//			string[] s = ReadLine().Split(' ');
//			int a = int.Parse(s[0]);
//			int b = int.Parse(s[1]);
//
//			if (a + b == 0) break;
//
//			WriteLine(a + b);
//		}
//	}
//}