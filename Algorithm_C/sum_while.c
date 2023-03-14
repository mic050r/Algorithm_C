/* p27 1,2, ...,n의 합 구하기(while문)*/
#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값 : ");
	scanf_s("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) { //i가 n 이하이면 반복하기
		sum += i;	//sum에 i 더하기
		i++;			//1 값을 1증가
	}
	//printf("%d", i); i 값이 n + 1이 됨
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}