#include<stdio.h>
#pragma warning (disable : 4996)

main() {
	int i, num, result = 0;
	i = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
start:
	result += i;
	i++;
	if (i <= num)
		goto start;
	printf("result : %d\n", result);
}