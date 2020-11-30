#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*str;

	str = ft_strnew(ft_strlen(src));
	if (str == 0)
		return (0);
	ft_strcpy(str, src);
	return (str);
}
