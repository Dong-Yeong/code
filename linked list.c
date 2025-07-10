#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// ���� �����͸� ������ ��� ����ü ����
typedef struct node {
    int data;
    struct node* next;
} Node;

// �� ���� ������ �����͸� �Է¹޾� ���� ����Ʈ�� �����ϴ� �Լ�
Node* createList() {
    Node* head = NULL, * temp = NULL, * p = NULL;
    int data, i;

    for (i = 1; i <= 3; i++) {
        printf("Enter the %d%s data : ", i, i == 1 ? "st" : (i == 2 ? "nd" : "rd"));
        scanf("%d", &data);
        // ���� �޸� �Ҵ����� �� ��� ����
        temp = (Node*)malloc(sizeof(Node));
        temp->data = data;
        temp->next = NULL;

        // ù ��° ����� head�� ��
        if (head == NULL) {
            head = temp;
        }
        else {
            // ������ ��带 ã�� temp�� ����
            p = head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = temp;
        }
    }

    return head;
}

// ���� ����Ʈ�� ��� �����͸� ����ϴ� �Լ�
void printList(Node* head) {
    int count = 1;
    printf("\n== Entered data ==\n");
    while (head != NULL) {
        printf("%d%s : %d\n", count, count == 1 ? "st" : (count == 2 ? "nd" : "rd"), head->data);
        head = head->next;
        count++;
    }
}

// ���� ����Ʈ�� ��� ���� �Ҵ�� �޸𸮸� �����ϴ� �Լ�
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
    getchar(); // ���α׷� ���� �� Ű �Է� ��� (���� ȯ�濡 ���� �ʿ� ���� �� ����)

    return 0;
}
