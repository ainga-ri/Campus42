#include "list.h"
#include <stdio.h>
#include <string.h>

void addfront()
{
	t_list *list0;
	t_list *list1;
	printf("%p\n", &list0);
	printf("%p\n", list0);
	list0 = NULL;
	list1 = NULL;
	char	*a0 = "umbreon";
	char 	*a1 = "vulpix";
	list0 = ft_lstnew(a0);
	list1 = ft_lstnew(a1);
	/* Test function lstaddfront - position second parameter as a first element */	
	ft_lstadd_front(&list0, list1);
	/* Test function lstsize, print de number of elements*/
	printf("size of struct %d\n", ft_lstsize(list0));
	/* Return the last element of linked list, REMOVING THE ORIGINAL -- ASK AREBELO */
	//list0 = ft_lstlast(list0);
	//printf("last element of struct %s\n", (char *)list0->content);
	printf("%p\n", &list0);
	printf("%p\n", list0);
	/* Ft print para no perder los elementos y listarlos, sin mandar el original */
	ft_print(list0);
	printf("%d\n", ft_lstsize(list0));
	/* Ft print para perder elementos porque estoy usando el original*/
	ft_print_delete(&list0);
	printf("%d\n", ft_lstsize(list0));
}
