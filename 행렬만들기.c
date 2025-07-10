#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

main() {
        int r, c;
        char** array;
        int i, j;

        // 2차원 배열 크기 입력 받기
        printf("array size : \n");
        printf("row : ");
        scanf("%d", &r);
        getchar();
        printf("col : ");
        scanf("%d", &c);
        getchar();

        //동적 할당
        array = (char**)malloc(r * sizeof(char*));
        for (i = 0; i < r; i++) {
            array[i] = (char*)malloc(c * sizeof(char));
        }
        // 할당된 공간에 문자 입력 받기
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%d %d : ", i, j);
                scanf(" %c", &array[i][j]);
                getchar(); 
            }
        }
        // 출력
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%c", array[i][j]);
            }
            printf("\n");
        }
        //반환
        for (i = 0; i < r; i++) {
            free(array[i]);
        }
        free(array);
        return 0;
 }


