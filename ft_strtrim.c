#include "libft.h"

static	void	ft_doit(char *str, char const *s, int j, int k)
{
	int i;

	i = 0;
	while (i < j)
	{
		*(str + i) = *(s + i + k);
		i++;
	}
	*(str + j) = '\0';
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s == NULL)
		return (0);
	i = 0;
	while (*(s + i) == '\n' || *(s + i) == ' ' || *(s + i) == '\t')
		i++;
	k = i;
	i = 0;
	j = 0;
	while (*(s + i + k) != '\0')
	{
		if (*(s + i + k) != '\n' && *(s + i + k) != ' ' && *(s + i + k) != '\t')
			j = i + 1;
		i++;
	}
	str = ft_strnew(j);
	if (str)
		ft_doit(str, s, j, k);
	return (str);
}
