/* p17 세 정수의 최댓값을 구하는 프로그램*/
#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a; //최댓값
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main(void) {
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 1, max3(3, 2, 1)); // a > b > c
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 2, max3(3, 2, 2)); // a > b = c
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 2, max3(3, 2, 2)); // a > b > b

}