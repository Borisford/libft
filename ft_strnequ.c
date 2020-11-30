#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned long i;

	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	i = 0;
	while (*(s1 + i) != '\0' && *(s1 + i) == *(s2 + i) && i < n)
		i++;
	if (i == n || (*(s1 + i) == '\0' && *(s1 + i) == *(s2 + i)))
		return (1);
	else
		return (0);
}
