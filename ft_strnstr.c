#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	l_haystack;

	l_haystack = ft_strlen(haystack);
	if (!*needle)
		return ((char *)haystack);
	while (l_haystack > len && *haystack)
	{
		i = 0;
		if (*haystack == needle[0])
		{
			while (*needle && needle[i] == haystack[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
			haystack += i - 1;
			l_haystack -= i + 1;
		}
		haystack++;
	}
	return ((void *)0);
}
