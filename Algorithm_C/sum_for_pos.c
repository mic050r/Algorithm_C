/* p32 1,2...,n의 합 구하기 (do문에서 양의 정수만을 n값으로 입력)*/
#include <stdio.h>

int main(void) {
	int n, i;
	int sum = 0;
	puts("1부터 n까지의 합을 구합니다. ");

	do { //n이 0보다 클 때까지 반복
		printf("n 값 입력 : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) { // <= 주의
		sum += i;
	}
	printf("1에서 %d까지의 합 : %d", n, sum);
	return 0;
}