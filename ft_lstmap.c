#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	if (!(new_element = ft_lstnew(f(lst->content))))
		return (NULL);
	new_list = new_element;
	lst = lst->next;
	while (lst)
	{
		if (!(new_element = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
