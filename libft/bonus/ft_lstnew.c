#include <stdlib.h>
#include "list.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;
	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (0);
	else
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}
