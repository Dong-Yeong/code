#include<stdio.h>
#pragma warning(disable:4996)
#define SIZE 10
main()
{

	int n;
	printf("n �Է� : ");
	scanf("%d", &n);
	printf("e�� �ٻ�ġ = %.6f\n", e_approx(n));
}
	float factorial(int n) {
		if (n <= 1)
			return 1;
		else
			return n * factorial(n - 1);
	}

	// e�� �ٻ�ġ�� ����ϴ� ����Լ�
	float e_approx(int n) {
		if (n == 0)
			return 1; // ����� �⺻ ���
		else
			return 1 / factorial(n) + e_approx(n - 1); // ��������� e�� �ٻ�ġ ���
	}

