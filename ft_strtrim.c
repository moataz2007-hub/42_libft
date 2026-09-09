#include "libft.h"
#include <stdlib.h>

static char	*make_str(char const *s1, size_t start, size_t end)
{
	char	*p;
	size_t	i;

	p = malloc(end - start + 2);
	if (!p)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	j;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		j = 0;
		while (set[j])
		{
			if (s1[start] == set[j])
				break;
			j++;
		}
		if (!set[j])
			break;
		start++;
	}
	while (end > start)
	{
		j = 0;
		while (set[j])
		{
			if (s1[end] == set[j])
				break;
			j++;
		}
		if (!set[j])
			break;
		end--;
	}
	return (make_str(s1, start, end));
}