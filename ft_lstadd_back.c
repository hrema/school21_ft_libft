#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr_lst;

	ptr_lst = *lst;
	if ((*lst) == NULL)
		(*lst) = new;
	else
	{
		while (ptr_lst->next)
			ptr_lst = ptr_lst->next;
		ptr_lst->next = new;
	}
}
