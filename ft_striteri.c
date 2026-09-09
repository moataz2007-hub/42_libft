
#include "libft.h"

/*
#include <stdio.h>

void	to_lower(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
int	main(void)
{
	char	str[] = "HELLO WORLD";

	ft_striteri(str, to_lower);
	printf("%s\n", str);
	return (0);
}
*/