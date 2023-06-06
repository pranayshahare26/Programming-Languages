/*Implement Stack using Arrays/Linked list*/

//Stack using linked list

#include <stdio.h>
#include <stdlib.h>

/* Stack structure */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

/* Stack functions */
void push(Stack *s, int item);
int pop(Stack *s);
int is_empty(Stack *s);

/* Main function */
int main() {
    Stack s;
    s.top = NULL;

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
void push(Stack *s, int item) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = item;
    new_node->next = s->top;
    s->top = new_node;
}

/* pop item from stack */
int pop(Stack *s) {
    if (is_empty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped_item = s->top->data;
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    return popped_item;
}

/* check if stack is empty */
int is_empty(Stack *s) {
    return s->top == NULL;
}