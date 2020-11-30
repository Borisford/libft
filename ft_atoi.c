#include "libft.h"

static	void	tf_strpos(const char *str, int *a, int *b)
{
	int	i;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	*b = i;
	if (str[i] < '0' && str[i] > '9')
	{
		*a = -1;
		return ;
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	*a = i;
}

int				ft_atoi(const char *str)
{
	int				i;
	int				j;
	unsigned long	result;
	int				deci;

	result = 0;
	deci = 1;
	tf_strpos(str, &i, &j);
	if (i == -1)
		return (0);
	while ((str[i - 1] >= '0' && str[i - 1] <= '9'))
		i--;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
		if (str[j - 1] == 45 && result > 9223372036854775808UL)
			return (0);
		if (str[j - 1] != 45 && result >= 9223372036854775807UL)
			return (-1);
	}
	if (str[j - 1] == 45)
		return (-result);
	return (result);
}
