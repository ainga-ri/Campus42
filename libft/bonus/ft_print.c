#include "list.h"
#include <stdio.h>

void	ft_print(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char*)lst->content);
		lst = lst->next;
	}
}
