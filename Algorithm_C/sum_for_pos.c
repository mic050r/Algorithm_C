/* p32 1,2...,n�� �� ���ϱ� (do������ ���� �������� n������ �Է�)*/
#include <stdio.h>

int main(void) {
	int n, i;
	int sum = 0;
	puts("1���� n������ ���� ���մϴ�. ");

	do { //n�� 0���� Ŭ ������ �ݺ�
		printf("n �� �Է� : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) { // <= ����
		sum += i;
	}
	printf("1���� %d������ �� : %d", n, sum);
	return 0;
}