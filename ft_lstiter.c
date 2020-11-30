#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	int	flag;

	if (lst == NULL || f == NULL)
		return ;
	flag = 1;
	while (flag)
	{
		f(lst);
		if (lst->next == NULL)
			flag = 0;
		else
			lst = lst->next;
	}
}
