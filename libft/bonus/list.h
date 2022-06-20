#ifndef __list_h__
#define __list_h__

typedef struct s_list
{
	void *content;
	struct s_list *next;
}t_list;
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void	ft_print(t_list *lst);
void	ft_print_delete(t_list **list0);
#endif
