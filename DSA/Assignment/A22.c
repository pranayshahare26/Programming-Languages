/*Implement Stack using Arrays/Linked list in C.*/

//Stack using Array

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

/* Stack structure */
typedef struct 
{
    int arr[MAX_SIZE];
    int top;
} Stack;

/* Stack functions */
void push(Stack *s, int item);
int pop(Stack *s);
int is_empty(Stack *s);
int is_full(Stack *s);

/* Main function */
int main() 
{
    Stack s;
    s.top = -1;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s)); /* empty stack, should return -1 */

    return 0;
}

/* push item to stack */
void push(Stack *s, int item) 
{
    if (is_full(s)) 
    {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = item;
}

/* pop item from stack */
int pop(Stack *s) 
{
    if (is_empty(s)) 
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

/* check if stack is empty */
int is_empty(Stack *s) 
{
    return s->top == -1;
}

/* check if stack is full */
int is_full(Stack *s) 
{
    return s->top == MAX_SIZE - 1;
}