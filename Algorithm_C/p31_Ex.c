#include <stdio.h>

int main(void) {
	//Q7 1+2...+7 =28로 출력하는 프로그램 작성
	int i = 1, sum = 0;
	while (i <= 7) { // = 주의!
		sum += i;
		i++;
	}
	printf("Q7 1 + 2 + ... + 7 = %d \n", sum);

	//Q8 가우스의 덧셈 방법을 이용하여 1부터 n까지의 정수 합을 구하는 프로그램 작성
	int n;
	int tot = 0;
	printf("n값 입력 : ");
	scanf_s("%d", &n);
	tot = (1 + n) * (n / 2);
	printf("Q8 1부터 %d까지의 정수 합 : %d\n", n, tot);

	//Q9
	int a, b;
	printf("a값 : "); scanf_s("%d", &a);
	printf("b값 : "); scanf_s("%d", &b);
	printf("Q9 %d와 %d 사이의 모든 정수의 합 : %d", a, b, sumof(a, b));
}

//Q9 정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 함수 작성
int sumof(int a, int b) {
	int i, min, max;
	int sum = 0;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	for (i = min; i <= max; i++) {
		sum += i;
	}

	return sum; //return 주의
}