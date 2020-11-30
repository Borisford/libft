#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*hay;
	char	*need;

	hay = (char*)haystack;
	need = (char*)needle;
	if (*need == '\0')
		return (hay);
	i = 0;
	while (hay[i] != '\0' && i < (int)len)
	{
		j = 0;
		if (hay[i] == need[0])
			while (need[j] != '\0' && hay[i + j] != '\0' && i + j < (int)len)
			{
				if (hay[i + j] != need[j])
					break ;
				if (need[j + 1] == '\0')
					return (&hay[i]);
				j++;
			}
		i++;
	}
	return (0);
}
