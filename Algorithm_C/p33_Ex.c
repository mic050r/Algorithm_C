#include <stdio.h>

int main(void) {
	//Q10 a,b에 정수를 입력하고 b-a를 출력하는 프로그램 작성
	int a, b;
	printf("a의 값 : "); scanf_s("%d", &a);
	/*do {
		printf("b의 값 : "); scanf_s("%d", &b);
		if (b <= a) {
			printf("a보다 큰 값을 입력하세요!\n");
		}
	} while (b <= a);*/

	while (1) {
		printf("b 값 : ");
		scanf_s("%d", &b);
		if (b > a) break;
		printf("a보다 큰 값을 입력하세요!\n");
	}
	printf("b - a는 %d입니다.\n", b - a);
	return 0;
}