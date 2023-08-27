#include "monty.h"

/**
 * add_node - Add node to the head of the stack.
 * @custom_head: Head of the stack
 * @custom_n: New value
 * Return: No return
 */
void add_node(stack_t **custom_head, int custom_n)
{
stack_t *new_node, *aux;

aux = *custom_head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error\n");
exit(EXIT_FAILURE);
}
if (aux)
aux->prev = new_node;
new_node->n = custom_n;
new_node->next = *custom_head;
new_node->prev = NULL;
*custom_head = new_node;
}
