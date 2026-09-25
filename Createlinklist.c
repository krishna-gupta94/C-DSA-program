#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node {
        int data;
        struct Node *next;
    };

    struct Node *head = malloc(sizeof(struct Node));
    head->data = 5;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 9;
    head->next->next = NULL;


    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}