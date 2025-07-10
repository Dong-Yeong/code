#include<stdio.h>
#pragma warning (disable:4996)
#include <string.h>


main() {
    int num, i = 0;
    int bin[32];			 // 32비트 정수를 가정

    printf("입력 : ");
    scanf("%d", &num);
    int Han = num;

    while (num > 0) {
        bin[i] = num % 2;	 // 2로 나눈 나머지를 배열에 저장
        num = num / 2; 	// 숫자를 2로 나눔
        i++;
    }

    printf("%d => : ", Han);
    for (int j = i - 1; j >= 0; j--) {		 // 역순으로 출력
        printf("%d", bin[j]);
    }
}

float problem1(void)
{
    char a1[9];
    char a2[9];
    int i;
    printf("입력 : ");
    scanf("%8s %8s", a1, a2);

    for (i = 0; i < 8; i++)
    {
        if (a1[i] == '1' && a2[i] == '1')
        {
            printf("1");
        }
        else
            printf("0");
    }
    for (i = 0; i < 8; i++)
    {
        if (a1[i] == '0' && a2[i] == '0')
        {
            printf("0");
        }
        else
            printf("1");
    }
}


float problem2(void) {
    int num, i = 0;
    int bin[32];			 // 32비트 정수를 가정

    printf("Enter an integer: ");
    scanf("%d", &num);
    int Han = num;

    while (num > 0) {
        bin[i] = num % 2;	 // 2로 나눈 나머지를 배열에 저장
        num = num / 2; 	// 숫자를 2로 나눔
        i++;
    }

    printf("%d => ", Han);
    for (int j = i - 1; j >= 0; j--) {		 // 역순으로 출력
        printf("%d", bin[j]);
    } 
}