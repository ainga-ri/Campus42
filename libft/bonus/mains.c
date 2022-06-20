/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:22:32 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/11 19:33:19 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "list.h"

//size_t	ft_strlen(const char *s);
//char	*ft_strchr(const char *s, int c);
//char 	*ft_strrchr(const char *s, int c);
//void	*ft_memchr(const void *s, int c, size_t n);
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//void fstrrchr();
//void fstrchr();
//void fmemchr();
//void fstrnstr();

//t_list *ft_lstnew(void *content);
//void lstnew();
void addfront();

int main(void)
{
	//fstrchr();
	//fstrrchr();
	//fmemchr();
	//fstrnstr()
	//lstnew();
	addfront();
	return (0);	
}
/*

void fstrnstr()
{
	char    *s1 = "lorem ipsum dolor sit amet";
        char    *s2 = "sit";

        printf("alfred: %s original: %s", ft_strnstr(s1, s2, 10), strnstr(s1, s2, 10));
}


void fmemchr()
{
	char *str = "kalis";
	char s = 'i';
	printf("my function: %p\noriginal function: %p\n", ft_memchr(str, s, 4), memchr(str, s, 4) );
}

void fstrchr()
{
	char *str = "teste";
	char s = 's';

	if (ft_strchr(str, s) != NULL)
	{
		printf("Memoria del string: %p\nMemoria de s en el string: %p\nMemoria de s en el string original function: %p\n", str, ft_strchr(str, s), strchr(str, s));
	}
	else
	{
		printf("Algo va mal");
	}

}

void fstrrchr()
{
	char *k = "david";
	char nul = '\0';
	char *empty = "";
	printf("%zu\n", ft_strlen(k));
	if (ft_strrchr(k, '\0') && (strrchr(k, '\0')))
		printf("La letra NOOO esta en el string");
	else
		printf("La letra esta en el string");
}
*/
