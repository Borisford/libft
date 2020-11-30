#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (j > (int)n)
		j = n;
	ft_strncpy(s1 + i, s2, j);
	*(s1 + i + j) = '\0';
	return (s1);
}
