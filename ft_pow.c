#include <stdlib.h>

int	ft_pow(int nb, int power)
{
	int result;
	int i;

	i = 1;
	result = nb;
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		while (power > i)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}
