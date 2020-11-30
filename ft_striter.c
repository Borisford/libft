#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (s == NULL)
		return ;
	if (f == NULL)
		return ;
	i = 0;
	while (*(s + i) != '\0')
	{
		f(s + i);
		i++;
	}
}
