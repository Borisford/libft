#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t a;

	a = 0;
	while (a < n)
	{
		*((char*)dst + a) = *((char*)src + a);
		if (*((unsigned char*)src + a) == (unsigned char)c)
			return (dst + a + 1);
		a++;
	}
	return (NULL);
}
