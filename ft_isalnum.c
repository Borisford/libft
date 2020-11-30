#include "libft.h"

int	ft_isalnum(int c)
{
	int a;

	if (c < -128 || c > 127)
	{
		a = c / 16;
		a = a * 16;
		c = c - a;
	}
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
