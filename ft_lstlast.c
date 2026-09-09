#include "libft.h"

/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");
	node1->next = node2;
	node2->next = node3;
	last = ft_lstlast(node1);
	printf("%s\n", (char *)last->content);
	free(node3);
	free(node2);
	free(node1);
	return (0);
}
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) // If the list is empty, return NULL
		return (NULL);
	while (lst->next)
		lst = lst->next; // Traverse the list until the last node
	return (lst); 
}