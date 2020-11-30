#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*haystack1;
	char	*needle1;

	haystack1 = (char*)haystack;
	needle1 = (char*)needle;
	if (*needle1 == '\0')
		return (haystack1);
	i = 0;
	while (haystack1[i] != '\0')
	{
		j = 0;
		if (haystack1[i] == needle1[0])
			while (needle1[j] != '\0' && haystack1[i + j] != '\0')
			{
				if (haystack1[i + j] != needle1[j])
					break ;
				if (needle1[j + 1] == '\0')
					return (&haystack1[i]);
				j++;
			}
		i++;
	}
	return (0);
}
