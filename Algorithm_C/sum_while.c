/* p27 1,2, ...,n�� �� ���ϱ�(while��)*/
#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf_s("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) { //i�� n �����̸� �ݺ��ϱ�
		sum += i;	//sum�� i ���ϱ�
		i++;			//1 ���� 1����
	}
	//printf("%d", i); i ���� n + 1�� ��
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}