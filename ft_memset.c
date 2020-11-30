#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t a;

	a = len;
	while (a--)
		*((char*)b + a) = c;
	return (b);
}
