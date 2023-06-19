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

bool is_empty(t_stack *stack)
{
    if (stack == NULL)
    {
        return true;
    }
    return false;
}

bool is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->content > stack->next->content)
        {
            return false;
        }
        stack = stack->next;
    }
    return true;
}