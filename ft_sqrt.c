#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int square;
	int i;

	i = 0;
	square = 0;
	if (nb > 0 || nb == 0)
	{
		while (square < nb && i < 46430)
		{
			i++;
			square = i * i;
		}
		if (square == nb)
		{
			return (i);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
