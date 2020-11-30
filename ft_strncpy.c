#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < len)
	{
		if (*(src + i) == '\0')
			flag = 1;
		if (flag)
			*(dst + i) = '\0';
		else
			*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		i++;
	}
	return (dst);
}
