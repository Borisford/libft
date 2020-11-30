#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*mem;
	t_list	*start;

	if (lst == NULL || f == NULL)
		return (NULL);
	mem = NULL;
	start = NULL;
	while (lst)
	{
		tmp = (t_list*)ft_memalloc(sizeof(t_list));
		if (!tmp)
			return (NULL);
		*tmp = *f(lst);
		lst = lst->next;
		if (start)
			mem->next = tmp;
		else
			start = tmp;
		mem = tmp;
	}
	mem->next = NULL;
	return (start);
}
