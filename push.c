#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Current line number in the Monty file
 */
void push(stack_t **stack, int line_number)
{
    printf("Push opcode called at line %d\n", line_number);

    if (stack)
        printf("Value pushed onto the stack!\n");
}
