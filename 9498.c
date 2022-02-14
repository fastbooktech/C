//2022.02.14
//fastbooktech
//9498

//풀이 1
#include <stdio.h>
int main() {
	int score;
	scanf("%d", &score);
	if (score >= 90) {
		printf("%c",'A');
	}
	else if (score >= 80) {
		printf("%c", 'B');
	}
	else if (score >= 70) {
		printf("%c", 'C');
	}
	else if (score >= 60) {
		printf("%c", 'D');
	}
	else {
		printf("%c", 'F');
	}
	return 0;
}

//풀이 2
#include <stdio.h>
int main() {
	char c;

	int score;
	scanf("%d", &score);

	if (score >= 90) {
		c = 'A';
	}
	else if (score >= 80) {
		c = 'B';
	}
	else if (score >= 70) {
		c = 'C';
	}
	else if (score >= 60) {
		c = 'D';
	}
	else {
		c = 'F';
	}
	printf("%c", c);
	return 0;
}