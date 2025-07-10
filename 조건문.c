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
	
	while (9)											//�ݺ� ���� ���� �����ذ��� ���ƿ����� ����
	{
		printf("\n");
		printf("���� �׸� �����Ͻÿ�\n"); ;				//�׸� ����
		printf("1�� ����\n");
		printf("2�� ����\n");
		printf("3�� ����\n");
		printf("4�� ����\n");
		printf("5�� ����\n:");
		scanf("%d", &value);
		switch(value)									//switch �������� �ش� ������ ����
		{
			case 1:
				problem1();							//���� 1���� �Լ��� ȣ��
				break;
			case 2:
				problem2();							//���� 2���� �Լ��� ȣ��
				break;
			case 3:
				problem3();							//���� 3���� �Լ��� ȣ��
				break;
			case 4:
				problem4();							//���� 4���� �Լ��� ȣ��
				break;
			case 5:
				problem5();							//���� 5���� �Լ��� ȣ��
				break;
			default:
				break;
		};
		printf("\n\n");
	}

}

void problem1(void)									// 1�� ������ �Լ� �����
{
	char a1[9];								//null�� �����Ͽ� 8��Ʈ�� ������ �Լ� �����
	char a2[9];
	int i;
	printf("8��Ʈ 2���� �ΰ� �Է� : ");
	scanf("%8s %8s", a1, a2);					//8��Ʈ �Է� �ޱ�

	printf("��� : \n");
	printf("%8s AND %8s = ", a1, a2);
	num1(a1, a2);								//AND ���� �Լ� ȣ���Ͽ� �����
	printf("\n");
	printf("%8s OR %8s = ", a1, a2);
	num2(a1, a2);								//OR ���� �Լ� ȣ���Ͽ� �����


}

float num1(char a1[], char a2[])
{
	for (int i = 0; i < 8; i++)				//  AND ������ �ϴ� �Լ� ����� 
	{
		if (a1[i] == '1' && a2[i] == '1')	//�� ��Ʈ�� �ǻ꿡�� 1�� 1 �� ���� 1 ���
		{
			printf("1");
		}
		else
			printf("0");
	}
}
float num2(char a1[], char a2[]) {

	for (int i = 0; i < 8; i++)			//  OR ������ �ϴ� �Լ� ����� 
	{
		if (a1[i] == '0' && a2[i] == '0')	//�� ��Ʈ�� ���꿡�� 0�� 0 �϶��� 0 ���
		{
			printf("0");
		}
		else
			printf("1");
	}

}

float problem2(void)					//���� 2���� �Լ� �����
{
	int num, i = 0;
	int bin[32];				 // 32��Ʈ ������ ����

	printf("Enter an integer: ");
	scanf("%d", &num);
	int Han = num;

	while (num > 0) {
		bin[i] = num % 2;		// 2�� ���� �������� �迭�� ����
		num = num / 2;			 // ���ڸ� 2�� ����
		i++;
	}

	printf("%d => ", Han);
	for (int j = i - 1; j >= 0; j--) {		// �������� ���
		printf("%d", bin[j]);
	}
}

float problem3(void)
{
	int a;
	printf("�Է� : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		int num = i;
		int Clap = 0;							 // 3, 6, 9�� ����ִ��� Ȯ��

		// ���ڸ� ���ڿ��� ��ȯ�Ͽ� �� �ڸ��� Ȯ��
		char str[10];							// ���ڿ� �迭 ����
		sprintf(str, "%d", num);				// ���ڸ� ���ڿ��� ��ȯ

		for (int j = 0; str[j] != '\0'; j++) {
			if (str[j] == '3' || str[j] == '6' || str[j] == '9') {
				str[j] = '*';				 // �ش� �ڸ��� *�� ����
				Clap = 1;
			}
		}

		if (Clap) {
			printf("%s  ", str);			 // ����� ���ڿ� ���
		}
		else {
			printf("%d  ", i);				 // 3, 6, 9�� ���� ��� ���� ���� ���
		}

		if (i % 10 == 0) {
			printf("\n");
		}
	}
}

void problem4(void) 
{
	int n;
	printf("n �Է� : ");
	scanf("%d", &n);
	printf("e�� �ٻ�ġ = %.6f\n", e(n));
}
double fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

// e�� �ٻ�ġ�� ����ϴ� ����Լ�
double e(int n) {
	if (n == 0)
		return 1; // ����� �⺻ ���
	else
		return 1 / fac(n) + e(n - 1); // ��������� e�� �ٻ�ġ ���
}


typedef struct {							//���� ����
	int base; // �ظ� ����
	int height; // ����
	int weight; // ����
} Br;

float problem5(void)
{
	//Br br[] = { {25,3,4},{4,4,6},{9,2,3,},{16,2,5},{1,5,2} };
	//int n = sizeof(br) / sizeof(br[0]);
	//int dp[n];							// dp �迭�� ũ�⸦ n���� ����
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
	//		maxH = dp[i];				//maxH �� ���� ���� ž ����
	//	}
	//}
}



int compare(void* a, void* b) 
{
	return((Br*)b)->weight - ((Br*)a)->weight;  //�� �Լ� �����
}