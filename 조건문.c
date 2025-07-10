#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void problem1(void);
float problem2(void);
float problem3(void);
void problem4(void);
float problem5(void);
float num1(char a1[], char a2[]);
float num2(char a1[], char a2[]);
double facl(int n);
double e_approx(int n);


main() 
{
	int value = 0;
	
	while (9)											//반복 루프 설정 문제해결후 돌아오도록 설정
	{
		printf("\n");
		printf("문제 항목 선택하시오\n"); ;				//항목 선택
		printf("1번 문제\n");
		printf("2번 문제\n");
		printf("3번 문제\n");
		printf("4번 문제\n");
		printf("5번 문제\n:");
		scanf("%d", &value);
		switch(value)									//switch 구문으로 해당 문제를 선택
		{
			case 1:
				problem1();							//문제 1번을 함수로 호출
				break;
			case 2:
				problem2();							//문제 2번을 함수로 호출
				break;
			case 3:
				problem3();							//문제 3번을 함수로 호출
				break;
			case 4:
				problem4();							//문제 4번을 함수로 호출
				break;
			case 5:
				problem5();							//문제 5번을 함수로 호출
				break;
			default:
				break;
		};
		printf("\n\n");
	}

}

void problem1(void)									// 1번 문제의 함수 만들기
{
	char a1[9];								//null을 포함하여 8비트를 가지는 함수 만들기
	char a2[9];
	int i;
	printf("8비트 2진수 두개 입력 : ");
	scanf("%8s %8s", a1, a2);					//8비트 입력 받기

	printf("출력 : \n");
	printf("%8s AND %8s = ", a1, a2);
	num1(a1, a2);								//AND 연산 함수 호출하여 만들기
	printf("\n");
	printf("%8s OR %8s = ", a1, a2);
	num2(a1, a2);								//OR 연산 함수 호출하여 만들기


}

float num1(char a1[], char a2[])
{
	for (int i = 0; i < 8; i++)				//  AND 연산을 하는 함수 만들기 
	{
		if (a1[i] == '1' && a2[i] == '1')	//두 비트의 션산에서 1과 1 일 때만 1 출력
		{
			printf("1");
		}
		else
			printf("0");
	}
}
float num2(char a1[], char a2[]) {

	for (int i = 0; i < 8; i++)			//  OR 연산을 하는 함수 만들기 
	{
		if (a1[i] == '0' && a2[i] == '0')	//두 비트의 연산에서 0과 0 일때만 0 출력
		{
			printf("0");
		}
		else
			printf("1");
	}

}

float problem2(void)					//문제 2번의 함수 만들기
{
	int num, i = 0;
	int bin[32];				 // 32비트 정수를 가정

	printf("Enter an integer: ");
	scanf("%d", &num);
	int Han = num;

	while (num > 0) {
		bin[i] = num % 2;		// 2로 나눈 나머지를 배열에 저장
		num = num / 2;			 // 숫자를 2로 나눔
		i++;
	}

	printf("%d => ", Han);
	for (int j = i - 1; j >= 0; j--) {		// 역순으로 출력
		printf("%d", bin[j]);
	}
}

float problem3(void)
{
	int a;
	printf("입력 : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		int num = i;
		int Clap = 0;							 // 3, 6, 9가 들어있는지 확인

		// 숫자를 문자열로 변환하여 각 자리수 확인
		char str[10];							// 문자열 배열 선언
		sprintf(str, "%d", num);				// 숫자를 문자열로 변환

		for (int j = 0; str[j] != '\0'; j++) {
			if (str[j] == '3' || str[j] == '6' || str[j] == '9') {
				str[j] = '*';				 // 해당 자리를 *로 변경
				Clap = 1;
			}
		}

		if (Clap) {
			printf("%s  ", str);			 // 변경된 문자열 출력
		}
		else {
			printf("%d  ", i);				 // 3, 6, 9가 없는 경우 원래 숫자 출력
		}

		if (i % 10 == 0) {
			printf("\n");
		}
	}
}

void problem4(void) 
{
	int n;
	printf("n 입력 : ");
	scanf("%d", &n);
	printf("e의 근사치 = %.6f\n", e(n));
}
double fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

// e의 근사치를 계산하는 재귀함수
double e(int n) {
	if (n == 0)
		return 1; // 재귀의 기본 경우
	else
		return 1 / fac(n) + e(n - 1); // 재귀적으로 e의 근사치 계산
}


typedef struct {							//구조 정의
	int base; // 밑면 넓이
	int height; // 높이
	int weight; // 무게
} Br;

float problem5(void)
{
	//Br br[] = { {25,3,4},{4,4,6},{9,2,3,},{16,2,5},{1,5,2} };
	//int n = sizeof(br) / sizeof(br[0]);
	//int dp[n];							// dp 배열의 크기를 n으로 설정
	//for (int i = 0; i < n; i++) {
	//	dp[i] = br[i].height;
	//	for (int j = 0; j < i; j++) {
	//		if (br[j].base > br[i].base && dp[i] < dp[j] + br[i].height) {
	//			dp[i] = dp[j] + br[i].height;
	//		}
	//	}
	//}
	//int maxH = 0;
	//for (int i = 0; i < n; i++) {
	//	if (maxH < dp[i]) {
	//		maxH = dp[i];				//maxH 에 가장 높은 탑 저장
	//	}
	//}
}



int compare(void* a, void* b) 
{
	return((Br*)b)->weight - ((Br*)a)->weight;  //비교 함수 만들기
}