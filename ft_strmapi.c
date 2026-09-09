
#include "libft.h"
/*
char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}


/*
int	main(void)
{
	char	*result;

	result = ft_strmapi("hello world", to_upper);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/