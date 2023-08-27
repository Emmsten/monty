#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @custom_head: Stack head
 * @custom_counter: Line number
 * Return: No return
 */
void f_add(stack_t **custom_head, unsigned int custom_counter)
{
stack_t *custom_h;
int custom_len = 0, custom_aux;

custom_h = *custom_head;
while (custom_h)
{
custom_h = custom_h->next;
custom_len++;
}
if (custom_len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", custom_counter);
fclose(bus.file);
free(bus.content);
free_stack(*custom_head);
exit(EXIT_FAILURE);
}
custom_h = *custom_head;
custom_aux = custom_h->n + custom_h->next->n;
custom_h->next->n = custom_aux;
*custom_head = custom_h->next;
free(custom_h);
}
