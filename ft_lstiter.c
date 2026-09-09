#include "libft.h"

/*
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;

	head = ft_lstnew("Hello");
	node2 = ft_lstnew("World");
	node3 = ft_lstnew("42");
	head->next = node2;
	node2->next = node3;
	ft_lstiter(head, print_content);
	free(node3);
	free(node2);
	free(head);
	return (0);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}