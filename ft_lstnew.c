#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tm;

	tm = (t_list*)ft_memalloc(sizeof(t_list));
	if (tm)
	{
		tm->next = NULL;
		tm->content = (void*)ft_memalloc(sizeof(*content) * content_size);
		if (content == NULL)
		{
			tm->content_size = 0;
			tm->content = 0;
		}
		else
		{
			tm->content_size = content_size;
			tm->content = ft_memcpy(tm->content, (void*)content, content_size);
		}
	}
	return (tm);
}
