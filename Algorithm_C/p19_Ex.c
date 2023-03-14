//p19 연습문제
#include <stdio.h>

//Q1 네 값의 최댓값을 구하는 함수 max4를 작성
int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = d;
	if (d > max) max = d;

	return max;
}

//Q2 세 값의 최솟값을 구하는 min3함수를 작성
int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

//Q3 네 값의 최솟값을 구하는 min4함수 작성
int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}
int main(void) {
	//Q1 실행
	printf("Q1. max4(%d, %d, %d, %d) = %d\n", 2, 9, 4, 7, max4(2, 9, 4, 7));
	//Q2 실행
	printf("Q2. min3(%d, %d, %d) = %d\n", 2, 9, 4, min3(2, 9, 4));
	//Q3 실행
	printf("Q3. min4(%d, %d, %d, %d) = %d\n", 2, 9, 4, 7, min4(2, 9, 4, 7));

}