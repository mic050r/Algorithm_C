/* p29 1,2, ..., n의 합 구하기(for문) */
#include <stdio.h>

int main(void) {
	int i, n;
	int sum = 0;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n값 입력 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) { // i = 1 주의 
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;

	/*
	<for문과 while문>
	- for문
	for(식1; 식2; 식3)
		루프본문
	-while문
	식1;
	while(식2) {
		루프본문
		식3;
	}
	*/
}