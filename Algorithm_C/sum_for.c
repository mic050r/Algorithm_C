/* p29 1,2, ..., n�� �� ���ϱ�(for��) */
#include <stdio.h>

int main(void) {
	int i, n;
	int sum = 0;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �Է� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) { // i = 1 ���� 
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;

	/*
	<for���� while��>
	- for��
	for(��1; ��2; ��3)
		��������
	-while��
	��1;
	while(��2) {
		��������
		��3;
	}
	*/
}