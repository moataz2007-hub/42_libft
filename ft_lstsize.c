#include "libft.h"

/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");
	node1->next = node2;
	node2->next = node3;
	printf("Size = %d\n", ft_lstsize(node1));
	free(node3);
	free(node2);
	free(node1);
	return (0);
}
*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next; // Move to the next node in the list
	}
	return (count); // Return the total number of nodes in the list
}