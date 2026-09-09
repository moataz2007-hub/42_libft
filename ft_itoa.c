#include "libft.h"
#include <stdlib.h>
static char	*handle_min(void)
{
	char	*ptr;

	ptr = malloc(12);
	if (!ptr)
		return (NULL);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

static char	*handle_negative(int number)
{
	char	*ptr;
	int		temp;
	int		count;
	int		i;

	if (number == -2147483648)
		return (handle_min());
	number = -number;
	temp = number;
	count = 1;
	while (temp != 0)
	{
		temp = temp / 10;
		count++;
	}
	ptr = malloc(count + 1);
	if (!ptr)
		return (NULL);
	ptr[0] = '-';
	ptr[count] = '\0';
	i = count - 1;
	while (i > 0)
	{
		ptr[i] = (number % 10) + '0';
		number = number / 10;
		i--;
	}
	return (ptr);
}

char	*ft_itoa(int number)
{
	char	*ptr;
	int		temp;
	int		count;
	int		i;

	if (number < 0)
		return (handle_negative(number));
	temp = number;
	count = 0;
	if (number == 0)
		count = 1;
	while (temp != 0)
	{
		temp = temp / 10;
		count++;
	}
	ptr = malloc(count + 1);
	if (!ptr)
		return (NULL);
	ptr[count] = '\0';
	i = count - 1;
	while (i >= 0)
	{
		ptr[i] = (number % 10) + '0';
		number = number / 10;
		i--;
	}
	return (ptr);
}