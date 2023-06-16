#include "libft/src/ft_printf.h"
#include "push_swap.h"

void print_list(t_stack *lst)
{
  while (lst != NULL)
  {
    printf("%d\n", lst->content);
    lst = lst->next;
  }
}

void reverseLinkedList(t_list **list)
{
    t_list *current = *list;
    t_list *previous = NULL;
    t_list *next = NULL;

    while (current != NULL) {
        next = current->next;  // Store the next node

        // Reverse the link
        current->next = previous;

        // Move pointers one position ahead
        previous = current;
        current = next;
    }

    // Update the head of the list
    *list = previous;
}

int list_size(t_stack *stack)
{
    int size = 0;
    while (stack != NULL)
    {
        size++;
        stack = stack->next;
    }
    return size;
}