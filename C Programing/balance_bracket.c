#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Structure to represent a stack
struct Stack {
    char data[100];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, char item) {
    if (stack->top == 99) {
        printf("Stack overflow\n");
    } else {
        stack->data[++stack->top] = item;
    }
}

// Function to pop an element from the stack
char pop(struct Stack *stack) { 
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return '\0';
    } else {
        return stack->data[stack->top--];
    }
}

// Function to check if parentheses are balanced
bool isBalanced(char expression[]) {
    struct Stack stack;
    initialize(&stack);

    int length = strlen(expression);

    for (int i = 0; i < length; i++) {
        char currentChar = expression[i];

        if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
            push(&stack, currentChar);
        } else if (currentChar == ')' || currentChar == ']' || currentChar == '}') {
            if (stack.top == -1) {
                
                return false;
            }

            char poppedChar = pop(&stack);

            if ((currentChar == ')' && poppedChar != '(') ||
                (currentChar == ']' && poppedChar != '[') ||
                (currentChar == '}' && poppedChar != '{')) {
                return false;
            }
        }
    }

    // Check if there are any unbalanced opening parentheses left
    return stack.top == -1;
}

int main() {
    char equation[] = "((a+b)+(c-d)+e)";

    if (isBalanced(equation)) {
        printf("The equation is balanced.\n");
    } else {
        printf("The equation is not balanced.\n");
    }

    return 0;
}
