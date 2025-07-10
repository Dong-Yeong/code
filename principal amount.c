#include<stdio.h>
#pragma warning(disable:4996)

 void printline(char);
 void value(float, float, int);

void main()
{
	float principal, inrate;
	int period;
	
	printf("Enter principal amount, interest rate , and period\n");
	scanf("%f %f %d", &principal, &inrate, &period);
	printline('-');
	value(principal, inrate, period);
	printline('-');
}
void printline(char c) 
{
	int i;
	for (i = 1; i < 52; i++) 
	{
		printf("%c", c);
	}
	printf("\n");
}


void value(float principal, float inrate, int period)
{
	int year;
	float sum;

	sum = principal;
	year = 1;
	while (year <= period) 
	{
		sum = sum * (1 + inrate);
		year = year + 1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n", principal, inrate, period, sum);
}