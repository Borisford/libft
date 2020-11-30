#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(len + 1) || !s)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	ft_strncpy(str, (s + start), len);
	return (str);
}
