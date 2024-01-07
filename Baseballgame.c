#include <stdio.h>
#include <stdlib.h>

int calPoints(char **operations, int operationsSize) {
    int *stack = malloc(operationsSize * sizeof(int));
    int top = -1;
    
    for (int i = 0; i < operationsSize; i++) {
        char *op = operations[i];
        if (op[0] == 'C') {
            top--;
        } else if (op[0] == 'D') {
            stack[++top] = 2 * stack[top - 1];
        } else if (op[0] == '+') {
            stack[++top] = stack[top - 1] + stack[top - 2];
        } else {
            stack[++top] = atoi(op);
        }
    }
    
    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }
    
    free(stack);
    return sum;
}

int main() {
    char *operations[] = {"5", "2", "C", "D", "+"};
    int operationsSize = sizeof(operations) / sizeof(operations[0]);
    
    int result = calPoints(operations, operationsSize);
    printf("%d\n", result);

    return 0;
}
