#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *node1, *node2, *node3;
    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;   
    node3->data = 30;
    
node1->next = node2;
node2->next = node3;
node3->next = node1; 

    struct Node *temp;
    temp = node1;
    printf("Circular Linked List: %d ", temp->data);
    temp = temp->next;
    printf("%d ", temp->data);
    temp = temp->next;
    printf("%d ", temp->data);
    temp = temp->next;
    printf("%d ", temp->data);
    
    
    return 0;
}