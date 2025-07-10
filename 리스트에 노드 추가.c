#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable : 4996)

typedef struct CustomerInfo {
    char name[100];
    char phoneNumber[20];
    struct CustomerInfo* next;
} CustomerInfo;

typedef CustomerInfo* CustomerList;

CustomerList insertCustomer(CustomerList head) {
    char name[100], phoneNumber[20];
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter customer phone number: ");
    scanf("%s", phoneNumber);

    CustomerList newCustomer = (CustomerList)malloc(sizeof(CustomerInfo));
    strcpy(newCustomer->name, name);
    strcpy(newCustomer->phoneNumber, phoneNumber);
    newCustomer->next = head;  
    head = newCustomer;

    return head;
}

CustomerList deleteCustomer(CustomerList head) {
    char name[100];
    printf("Enter customer name to delete: ");
    scanf("%s", name);

    CustomerList temp = head, prev = NULL;
    while (temp != NULL && strcmp(temp->name, name) != 0) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Customer not found.\n");
        return head;
    }
    if (prev == NULL) {
        head = temp->next;
    }
    else {
        prev->next = temp->next;
    }
    free(temp);
    printf("Customer deleted successfully.\n");

    return head;
}

void printCustomers(CustomerList head) {
    while (head != NULL) {
        printf("Name: %s, Phone Number: %s\n", head->name, head->phoneNumber);
        head = head->next;
    }
}

void deleteList(CustomerList head) {
    CustomerList temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    CustomerList head = NULL;
    int choice;

    while (1) {
        printf("\n1. Add Customer\n2. Delete Customer\n3. List Customers\n4. Exit\nchoice !!! : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            head = insertCustomer(head);
            break;
        case 2:
            head = deleteCustomer(head);
            break;
        case 3:
            printCustomers(head);
            break;
        case 4:
            deleteList(head);
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
