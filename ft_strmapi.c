#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*str;
	int		pos;

	if (s == NULL)
		return (0);
	if (f == NULL)
		return (0);
	len = 0;
	while (*(s + len) != '\0')
		len++;
	str = ft_strnew(len);
	if (str)
	{
		pos = 0;
		while (pos < (len))
		{
			*(str + pos) = f(pos, *(s + pos));
			pos++;
		}
		*(str + len) = '\0';
		return (str);
	}
	return (NULL);
}
