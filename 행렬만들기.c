#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

main() {
        int r, c;
        char** array;
        int i, j;

        // 2���� �迭 ũ�� �Է� �ޱ�
        printf("array size : \n");
        printf("row : ");
        scanf("%d", &r);
        getchar();
        printf("col : ");
        scanf("%d", &c);
        getchar();

        //���� �Ҵ�
        array = (char**)malloc(r * sizeof(char*));
        for (i = 0; i < r; i++) {
            array[i] = (char*)malloc(c * sizeof(char));
        }
        // �Ҵ�� ������ ���� �Է� �ޱ�
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%d %d : ", i, j);
                scanf(" %c", &array[i][j]);
                getchar(); 
            }
        }
        // ���
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%c", array[i][j]);
            }
            printf("\n");
        }
        //��ȯ
        for (i = 0; i < r; i++) {
            free(array[i]);
        }
        free(array);
        return 0;
 }


