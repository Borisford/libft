#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == SIZE_MAX)
		return (NULL);
	str = (char*)ft_memalloc(size + 1);
	if (str)
	{
		ft_strclr(str);
		return (str);
	}
	return (NULL);
}
