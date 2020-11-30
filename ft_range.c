#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int *str;
	int i;

	if (min >= max)
		return (0);
	len = max - min;
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	else
	{
		str[len] = '\0';
		i = 0;
		while (i < len)
		{
			*(str + i) = min + i;
			i++;
		}
	}
	return (str);
}
