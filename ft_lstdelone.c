#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return ;
	if (*alst == NULL)
		return ;
	if (del == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
