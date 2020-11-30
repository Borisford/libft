#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	while (a > 0 && *(s + a) != c)
		a--;
	if (*(s + a) == c)
		return ((char*)s + a);
	return (0);
}
