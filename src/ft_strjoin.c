#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	if (!(s1 && s2))
		reutn ((void *)0);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return ((void *)0);
	while (*s1)
	{
		join[i] = *s1;
		s1++;
	}
	while (*s2)
	{
		join[i] = *s2;
		s2++;
	}
	join[i] = '\0';
	return (join);
}
