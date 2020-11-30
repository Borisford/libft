#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dptr;
	char	*sptr;
	size_t	i;
	int		ud;

	if (dst < src)
	{
		dptr = (char*)dst;
		sptr = (char*)src;
		ud = 1;
	}
	else if (dst > src)
	{
		dptr = (char*)dst + len - 1;
		sptr = (char*)src + len - 1;
		ud = -1;
	}
	i = 0;
	while (i < len && dst != src)
	{
		*(dptr + (i * ud)) = *(sptr + (i * ud));
		i++;
	}
	return (dst);
}
