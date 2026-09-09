#include "libft.h"


t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	printf("%s\n", (char *)node->content);
	free(node);
	return (0);
}
*/
