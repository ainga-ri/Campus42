#include "list.h"
#include <stdio.h>
#include <string.h>
void	lstnew()
{
        t_list  *list;
        list = NULL;
        char    *a = "eevee";
        list = ft_lstnew(a);
        while (list)
        {
                printf("%s", (char *)list->content);
                list = list->next;
        }
}
