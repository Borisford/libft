#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while (tmp->next != NULL)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		del((tmp)->next->content, (tmp)->next->content_size);
		free(tmp->next->next);
		free(tmp->next);
		tmp->next = NULL;
		tmp = *alst;
	}
	del((tmp)->content, (tmp)->content_size);
	tmp->next = NULL;
	free(tmp->next);
	*alst = NULL;
	free(*alst);
	alst = NULL;
	free(alst);
}
