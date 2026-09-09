#include "libft.h"
#include <stdlib.h>

/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	ft_lstdelone(node, del_content);
	return (0);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *)) 
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}