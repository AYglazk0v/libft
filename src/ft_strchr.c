#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string)
	{
		if (*string == (char) symbol)
			return ((char *) string);
		string++;
	}
	return ((void *)0);
}
