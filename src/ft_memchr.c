#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*((char *)s) && n--)
	{
		if (*((char *)s) == (char)c)
			return ((void *)s);
		s++;
	}
	return ((void *)0);
}
