#include "libft.h"

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;

	head = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	free(node3);
	free(node2);
	free(head);
	return (0);
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst) // If the list is empty, set the new node as the head of the list
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst); // Find the last node of the list
	last->next = new; // Set the next pointer of the last node to the new node
}