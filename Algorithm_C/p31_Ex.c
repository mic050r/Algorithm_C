#include <stdio.h>

int main(void) {
	//Q7 1+2...+7 =28�� ����ϴ� ���α׷� �ۼ�
	int i = 1, sum = 0;
	while (i <= 7) { // = ����!
		sum += i;
		i++;
	}
	printf("Q7 1 + 2 + ... + 7 = %d \n", sum);

	//Q8 ���콺�� ���� ����� �̿��Ͽ� 1���� n������ ���� ���� ���ϴ� ���α׷� �ۼ�
	int n;
	int tot = 0;
	printf("n�� �Է� : ");
	scanf_s("%d", &n);
	tot = (1 + n) * (n / 2);
	printf("Q8 1���� %d������ ���� �� : %d\n", n, tot);

	//Q9
	int a, b;
	printf("a�� : "); scanf_s("%d", &a);
	printf("b�� : "); scanf_s("%d", &b);
	printf("Q9 %d�� %d ������ ��� ������ �� : %d", a, b, sumof(a, b));
}

//Q9 ���� a, b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Լ� �ۼ�
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

	return sum; //return ����
}