#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (--n && (*((char *)s1) == *((char *)s2)))
	{
		s1++;
		s2++;
	}
	return (*((char *)s1) - *((char *)s2));
}
