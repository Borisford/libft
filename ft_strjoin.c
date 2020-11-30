#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	i = ft_strlen(s1);
	str = ft_strnew(i + ft_strlen(s2));
	if (str)
	{
		ft_strcpy(str, s1);
		ft_strcpy(str + i, s2);
		return (str);
	}
	return (NULL);
}
