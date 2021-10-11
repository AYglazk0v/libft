#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*str_tmp;

	str_tmp = (void *)0;
	while (*string)
	{
		if (*string == (char)c)
			str_tmp = (char *)string;
		string++;
	}
	if (str_tmp == (void *)0)
		return ((void *)0);
	return (str_tmp);
}
