#include "libft.h"

static	int		ft_strcou(char const *s, char c)
{
	int	sp;
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	sp = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i + 1) == c || *(s + i + 1) == '\0') && *(s + i) != c)
			sp++;
		i++;
	}
	return (sp);
}

static	int		ft_wlims(char const *s, char c, int *i, int *j)
{
	int	start;

	*i = *i + 1;
	*j = *j + 1;
	while (s[*i] && s[*i] == c)
		*i = *i + 1;
	start = *i;
	while (s[*i] && s[*i] != c)
		*i = *i + 1;
	return (start);
}

char			**ft_strsplit(char const *s, char c)
{
	int		sn[2];
	char	**tab;
	int		i;
	int		j;

	sn[0] = ft_strcou(s, c);
	if (!(tab = (char**)ft_memalloc(sizeof(*tab) * (sn[0] + 1))))
		return (NULL);
	i = -1;
	j = -1;
	while (j < sn[0] - 1)
	{
		sn[1] = ft_wlims(s, c, &i, &j);
		tab[j] = ft_strsub(s, sn[1], i - sn[1]);
		if (tab[j] == NULL)
		{
			while (j > 0)
				free(tab[j--]);
			free(tab[j]);
			return (0);
		}
	}
	tab[j + 1] = NULL;
	return (tab);
}
