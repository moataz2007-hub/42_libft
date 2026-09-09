#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remaining;
	size_t	new_len;
	size_t	i;
	char	*p;

	if (start >= ft_strlen(s))
		new_len = 0;
	else
	{
		remaining = ft_strlen(s) - start;
		if (remaining < len)
			new_len = remaining;
		else
			new_len = len;
	}
	p = malloc(new_len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < new_len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}