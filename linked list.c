#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 정수 데이터를 저장할 노드 구조체 정의
typedef struct node {
    int data;
    struct node* next;
} Node;

// 세 개의 정수형 데이터를 입력받아 연결 리스트를 생성하는 함수
Node* createList() {
    Node* head = NULL, * temp = NULL, * p = NULL;
    int data, i;

    for (i = 1; i <= 3; i++) {
        printf("Enter the %d%s data : ", i, i == 1 ? "st" : (i == 2 ? "nd" : "rd"));
        scanf("%d", &data);
        // 동적 메모리 할당으로 새 노드 생성
        temp = (Node*)malloc(sizeof(Node));
        temp->data = data;
        temp->next = NULL;

        // 첫 번째 노드라면 head가 됨
        if (head == NULL) {
            head = temp;
        }
        else {
            // 마지막 노드를 찾아 temp를 연결
            p = head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = temp;
        }
    }

    return head;
}

// 연결 리스트의 모든 데이터를 출력하는 함수
void printList(Node* head) {
    int count = 1;
    printf("\n== Entered data ==\n");
    while (head != NULL) {
        printf("%d%s : %d\n", count, count == 1 ? "st" : (count == 2 ? "nd" : "rd"), head->data);
        head = head->next;
        count++;
    }
}

// 연결 리스트의 모든 노드와 할당된 메모리를 해제하는 함수
void freeList(Node* head) {
    Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    head = createList();
    printList(head);
    freeList(head);

    printf("\nPress any key to continue . . .\n");
    getchar(); // 프로그램 종료 전 키 입력 대기 (개발 환경에 따라 필요 없을 수 있음)

    return 0;
}
