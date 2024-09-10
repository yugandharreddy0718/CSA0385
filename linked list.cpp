#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void printList(struct Node* head) {
    while (head) {
        printf("%d", head->data);
        if (head->next) {
            printf(" -> ");
        }
        head = head->next;
    }
    printf("\n");
}
int countAndPrintOddNumbers(struct Node* head) {
    int count = 0;
    int first = 1; 
    while (head) {
        if (head->data % 2 != 0) {  
            if (!first) {
                printf(", ");
            }
            printf("%d", head->data);
            count++;
            first = 0;
        }
        head = head->next;
    }
    printf("\n");
    return count;
}
int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;
    printf("The linked list is:\n");
    printList(head);
    printf("Odd numbers in the linked list:\n");
    int numOddNodes = countAndPrintOddNumbers(head);
    printf("Number of odd nodes: %d\n", numOddNodes);
}

