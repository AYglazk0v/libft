#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1)
		return ((void *)0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	return (ft_substr(s1, 0, size + 1));
}
