#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
     
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 5;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 9;
    head->next->next = NULL;

    
   struct Node *newNode = malloc(sizeof(struct Node));
   newNode->data = 2;

   newNode->next = head;
   head = newNode;

   
   struct Node *temp = head;
  while (temp != NULL) {
       printf("%d ", temp->data);
       temp = temp->next;
   }

    return 0;
}
