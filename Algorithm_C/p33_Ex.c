#include <stdio.h>

int main(void) {
	//Q10 a,b�� ������ �Է��ϰ� b-a�� ����ϴ� ���α׷� �ۼ�
	int a, b;
	printf("a�� �� : "); scanf_s("%d", &a);
	/*do {
		printf("b�� �� : "); scanf_s("%d", &b);
		if (b <= a) {
			printf("a���� ū ���� �Է��ϼ���!\n");
		}
	} while (b <= a);*/

	while (1) {
		printf("b �� : ");
		scanf_s("%d", &b);
		if (b > a) break;
		printf("a���� ū ���� �Է��ϼ���!\n");
	}
	printf("b - a�� %d�Դϴ�.\n", b - a);
	return 0;
}