//p19 ��������
#include <stdio.h>

//Q1 �� ���� �ִ��� ���ϴ� �Լ� max4�� �ۼ�
int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = d;
	if (d > max) max = d;

	return max;
}

//Q2 �� ���� �ּڰ��� ���ϴ� min3�Լ��� �ۼ�
int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

//Q3 �� ���� �ּڰ��� ���ϴ� min4�Լ� �ۼ�
int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}
int main(void) {
	//Q1 ����
	printf("Q1. max4(%d, %d, %d, %d) = %d\n", 2, 9, 4, 7, max4(2, 9, 4, 7));
	//Q2 ����
	printf("Q2. min3(%d, %d, %d) = %d\n", 2, 9, 4, min3(2, 9, 4));
	//Q3 ����
	printf("Q3. min4(%d, %d, %d, %d) = %d\n", 2, 9, 4, 7, min4(2, 9, 4, 7));

}