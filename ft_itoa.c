#include "libft.h"

static	int		ft_howlong(int n)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		i = i + 2;
		n = (-1) * (n / 10);
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static	void	ft_putmin(char **res, int *i, int *n, int lon)
{
	**res = 45;
	*(*res + lon - *i) = ((-1) * (*n % 10)) + 48;
	*n = (-1) * (*n / 10);
	*i = *i + 1;
}

char			*ft_itoa(int n)
{
	char	*res;
	int		lon;
	int		i;

	lon = ft_howlong(n);
	res = ft_strnew(lon);
	if (res == NULL)
		return (NULL);
	*(res + lon) = '\0';
	if (n == 0)
	{
		*res = 48;
		return (res);
	}
	i = 1;
	if (n < 0)
		ft_putmin(&res, &i, &n, lon);
	while (n > 0)
	{
		*(res + lon - i) = n % 10 + 48;
		n = n / 10;
		i++;
	}
	return (res);
}
