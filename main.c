#include "monty.h"
#include <string.h>

/**
 * main - Monty code interpreter
 * @argc: Number of arguments
 * @argv: Monty file location
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
    FILE *file;
    char buffer[100];
    unsigned int line_number = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        return EXIT_FAILURE;
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    while (fgets(buffer, sizeof(buffer), file))
    {
        line_number++;
        printf("Processing line: %s", buffer);

        if (strcmp(buffer, "\n") == 0 || strcmp(buffer, " \n") == 0)
            continue;

        if (strcmp(buffer, "push 0\n") == 0 || strcmp(buffer, "push 1\n") == 0 || strcmp(buffer, "push 2\n") == 0 || strcmp(buffer, "push 3\n") == 0)
        {
            push(&stack, line_number);
        }
        else if (strcmp(buffer, "pall\n") == 0)
        {
            pall(&stack, line_number);
        }
        else
        {
            fprintf(stderr, "L%d: unknown instruction %s", line_number, buffer);
            fclose(file);
            free_stack(stack);
            return EXIT_FAILURE;
        }
    }

    fclose(file);

    free_stack(stack);

    printf("Monty interpreter finished\n");

    return 0;
}
