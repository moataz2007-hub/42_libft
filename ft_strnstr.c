#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (ft_strlen(little) > len)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		k = i;
		if (big[i] == little[0])
		{
			while (big[k] == little[j] && little[j] && k < len)
			{
				j++;
				k++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}