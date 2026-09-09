#include "libft.h"

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new;

	head = ft_lstnew("Hello");
	new = ft_lstnew("World");
	ft_lstadd_front(&head, new);
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	free(new);
	free(head);
	return (0);
}
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}