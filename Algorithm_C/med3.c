/* �� ������ ���� �Է��ϰ� �߾Ӱ� ���ϱ� */
#include <stdio.h>

int med3(int a, int b, int c) {
	/*if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if(b > c)
		return c;
	else return b;*/
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	return c;
}



int main(void) {
	int a, b, c;

	printf("�� ������ �߾Ӱ��� ���մϴ�\n");
	printf("a�� �� : "); scanf_s("%d", &a);
	printf("b�� �� : "); scanf_s("%d", &b);
	printf("c�� �� : "); scanf_s("%d", &c);

	printf("�߾Ӱ��� %d�Դϴ�. \n", med3(a, b, c));

	return 0;
}