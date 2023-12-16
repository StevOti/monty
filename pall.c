#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Current line number in the Monty file
 */
void pall(stack_t **stack, unsigned int line_number)
{
    printf("Pall opcode called at line %d\n", line_number);

    if (stack)
        printf("Printing all values on the stack!\n");
}
