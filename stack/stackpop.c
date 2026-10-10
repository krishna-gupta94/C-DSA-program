#include<stdio.h>
# define MAX 5
int stack[MAX];
int top = -1;
int i;

void push (int x )
{
if (top==MAX-1)
{
printf("stack overflow");
}

else
{
top++;
stack[top] = x;
}
}
void pop()
{
if (top==-1)
{
printf("stack is empty");
}
else
{
     printf("Popped: %d\n", stack[top]);
top--;
}
}
void display()
{
for (i =top; i>=0; i--)
    {
    printf("%d\n",stack[i]);
}
}
void peek()
{
    printf("top value is %d ",stack[top] );
    
}

int main ()
{
push(10);
push(20);
push(30);
push(40);
push(50);
display();
    
    pop();
    display();
    peek();
return 0;
}