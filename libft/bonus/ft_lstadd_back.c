#include "list.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!(ft_lstsize(*lst)))
			*lst = new;
		else
			ft_lstlast(*lst)->next = new;
	}
}
