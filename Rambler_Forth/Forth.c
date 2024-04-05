#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_MAX_SIZE 1000

typedef struct {
    int data[STACK_MAX_SIZE];
    int top;
} IntStack;

void int_stack_init(IntStack *stack) {
    stack->top = -1;
}
void int_stack_push(IntStack *stack, int value) {
    if (stack->top >= STACK_MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = value;
}
void int_stack_display(const IntStack *stack) {
    int i;
    printf("Stack: ");
    for (i = stack->top; i >= 0; i--) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}
int int_stack_pop(IntStack *stack) {
    if (stack->top < 0) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}
int int_stack_top(const IntStack *stack) {
    if (stack->top < 0) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top];
}
void int_stack_add(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for addition\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    int_stack_push(stack, a + b);
}
void int_stack_subtract(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for subtraction\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    int_stack_push(stack, b - a);
}
void int_stack_divide(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for division\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    if (a == 0) {
        printf("Division by zero\n");
        exit(EXIT_FAILURE);
    }
    int_stack_push(stack, b / a);
}
void int_stack_multiply(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for multiplication\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    int_stack_push(stack, a * b);
}
bool int_stack_empty(const IntStack *stack) {
    return stack->top < 0;
}
void int_stack_dup(IntStack *stack) {
    if (stack->top < 0) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    int_stack_push(stack, stack->data[stack->top]);
}
void int_stack_swap(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for swap\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    int_stack_push(stack, a);
    int_stack_push(stack, b);
}
void int_stack_drop(IntStack *stack) {
    if (stack->top < 0) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    stack->top--;
}
void int_stack_over(IntStack *stack) {
    int a, b;
    if (stack->top < 1) {
        printf("Not enough elements for over\n");
        exit(EXIT_FAILURE);
    }
    a = stack->data[stack->top];
    b = stack->data[stack->top - 1];
    int_stack_push(stack, b);
    int_stack_push(stack, a);
}
void int_stack_rot(IntStack *stack) {
    int a, b, c;
    if (stack->top < 2) {
        printf("Not enough elements for rotation\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    c = int_stack_pop(stack);
    int_stack_push(stack, b);
    int_stack_push(stack, a);
    int_stack_push(stack, c);
}
void int_stack_2swap(IntStack *stack) {
    int a, b, c, d;
    if (stack->top < 3) {
        printf("Not enough elements for 2swap\n");
        exit(EXIT_FAILURE);
    }
    a = int_stack_pop(stack);
    b = int_stack_pop(stack);
    c = int_stack_pop(stack);
    d = int_stack_pop(stack);
    int_stack_push(stack, b);
    int_stack_push(stack, a);
    int_stack_push(stack, d);
    int_stack_push(stack, c);
}
void int_stack_2dup(IntStack *stack) {
    if (stack->top < 1) {
        printf("Not enough elements for 2dup\n");
        exit(EXIT_FAILURE);
    }
    int a, b;
    a = stack->data[stack->top];
    b = stack->data[stack->top - 1];
    int_stack_push(stack, b);
    int_stack_push(stack, a);
}
void int_stack_2drop(IntStack *stack) {
    if (stack->top < 1) {
        printf("Not enough elements for 2drop\n");
        exit(EXIT_FAILURE);
    }
    stack->top -= 2;
}
void int_stack_2over(IntStack *stack) {
    if (stack->top < 3) {
        printf("Not enough elements for 2over\n");
        exit(EXIT_FAILURE);
    }
    int a, b, c, d;
    a = stack->data[stack->top - 2];
    b = stack->data[stack->top - 1];
    c = stack->data[stack->top - 4];
    d = stack->data[stack->top - 3];
    int_stack_push(stack, c);
    int_stack_push(stack, d);
    int_stack_push(stack, a);
    int_stack_push(stack, b);
}
int main() {
    // Testing all the operations
    IntStack stack;
    int_stack_init(&stack);
    int_stack_push(&stack, 9);
    int_stack_push(&stack, 12);
    int_stack_push(&stack, 149);
    int_stack_display(&stack); 
    int_stack_add(&stack);
    int_stack_display(&stack); 
    int_stack_push(&stack, 7);
    int_stack_subtract(&stack);
    int_stack_display(&stack); 
    int_stack_push(&stack, 24);
    int_stack_push(&stack, 10);
    int_stack_multiply(&stack);
    int_stack_display(&stack); 
    int_stack_divide(&stack);
    int_stack_display(&stack); 
    int_stack_dup(&stack);
    int_stack_display(&stack);
    int_stack_swap(&stack);
    int_stack_display(&stack);
    int_stack_over(&stack);
    int_stack_display(&stack);
    int_stack_rot(&stack);
    int_stack_display(&stack);
    int_stack_drop(&stack);
    int_stack_display(&stack);
    //2swap, 2over, 2drop, 2dup
    int_stack_push(&stack, 1);
    int_stack_push(&stack, 2);
    int_stack_push(&stack, 3);
    int_stack_push(&stack, 4);
    int_stack_push(&stack, 47);
    int_stack_push(&stack, 100);
    int_stack_2swap(&stack);
    int_stack_display(&stack); 
    int_stack_2dup(&stack);
    int_stack_display(&stack); 
    int_stack_2over(&stack);
    int_stack_2dup(&stack);
    int_stack_display(&stack); 
    int_stack_2drop(&stack);
    int_stack_display(&stack); 
    int_stack_2drop(&stack);
    int_stack_2drop(&stack);
    int_stack_display(&stack); 
    int_stack_2drop(&stack);
    int_stack_2drop(&stack);
    int_stack_2drop(&stack);
    int_stack_display(&stack); 
    int_stack_2drop(&stack);    
    int_stack_display(&stack); 
    return 0;
}
