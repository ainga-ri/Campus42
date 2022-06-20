#include "list.h"
#include <stdio.h>

void ft_print_delete(t_list **list0)
{
	while (*list0)
	{
		printf("%s\n", (char *)(*list0)->content);
		*list0 = (*list0)->next;
	}
}
