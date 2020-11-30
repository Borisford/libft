#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(size + 1))
		return (NULL);
	if (size == 0)
		return (ft_strnew(0));
	if (!(mem = malloc(size)))
		return (NULL);
	while (size--)
		*(((unsigned char*)mem) + size) = 0;
	return (mem);
}
