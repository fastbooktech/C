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

//다른 풀이 (reference : @jychoi9712)
//나는 0인지 확인하기 전에 일단 입력받는 코드가 필요해서 while 대신 do while로 무조건 한번 실행되게 하고, 대신 0,0이 맨 처음 입력될 경우를 고려하여 + 나중에 입력되더라도 0,0일땐 아무것도 출력되지 않게 하기 위해 if문 사용
//이 코드는 애초에 while(1)을 통해 무조건 반복한다, break 조건을 만나기 전까지!로 프로그램을 만들고 0,0 인 경우면 break 하되 아닌 경우는 항상 출력하는 코드. 훨씬 간결하고 로직도 알맞다.
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

//다른 풀이 2 ( reference : @	thstjdtn214)
//이 코드는 0,0일때 종료하는걸 두 값 자체가 0인지 확인하는게 아니라 둘이 더해서 0인 조건으로 품. 만일 음수가 가능했다면 해당 조건은 예외로 인해 오류가 생겼을듯. 근데 int 양의 정수 기준이라서 통과한 것 같다.
//참고로 C#임
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