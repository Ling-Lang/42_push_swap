#include "libft/src/ft_printf.h"
#include "push_swap.h"
void ft_add_content(t_list **lst, void *content_to_add)
{
  t_list *node;
  t_list *last_node;

  node = malloc(sizeof(t_list));
  if(!node)
    return ;
  node->content = content_to_add;
  node->next = NULL;
  if(*lst == NULL)
  {
    *lst = node;
    return ;
  }
  last_node = *lst;
  while (last_node->next != NULL) 
    last_node = last_node->next;

  last_node->next = node;
  
}

void print_list(t_list *lst)
{
  while (lst != NULL)
  {
    ft_printf("%d\n", *(int *)lst->content);
    lst = lst->next;
  }
}
