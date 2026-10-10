#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
int main(){
struct Node *node1, *node2, *node3  ;
 node1 = malloc(sizeof(struct Node));
node1->data = 12;
node2 = malloc(sizeof(struct Node));
node2->data = 24;
node3 = malloc(sizeof(struct Node));
node3->data = 36;

node1->prev = NULL;
node1->next = node2;
node2->prev = node1;
node2->next = node3;
node3->prev = node2;
node3->next = NULL;

printf("%d, %d, %d\n", node1->data, node2->data, node3->data);
    struct Node *temp;
    temp = node1;
    node1 = node2;

    printf("%d, %d", node1->data, node3->data);



return 0; 
}
