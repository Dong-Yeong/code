#include<stdio.h>
#pragma warning(disable:4996)
#define SIZE 10
main()
{

	int n;
	printf("n 입력 : ");
	scanf("%d", &n);
	printf("e의 근사치 = %.6f\n", e_approx(n));
}
	float factorial(int n) {
		if (n <= 1)
			return 1;
		else
			return n * factorial(n - 1);
	}

	// e의 근사치를 계산하는 재귀함수
	float e_approx(int n) {
		if (n == 0)
			return 1; // 재귀의 기본 경우
		else
			return 1 / factorial(n) + e_approx(n - 1); // 재귀적으로 e의 근사치 계산
	}

