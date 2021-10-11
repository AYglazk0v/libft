#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	i;

	cpy = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (cpy == NULL)
		return ((void *)0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
