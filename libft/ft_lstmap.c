#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!f || !*lst)
		return (NULL);
	while (temp)
	{

	}
}
