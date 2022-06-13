/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:17:04 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/06/10 16:54:26 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <math.h>
/*
int ft_potencia(int size, int i)
{
	int k;

	k = 
	return ()
}
*/
char	*ft_itoa(int n)
{
	int i;
	int size;
	char *s;
	int aux;

	i = 0;
	size = 1;
	aux = n;
	if (aux < 0)
	{
		aux = -aux;
		size++;
	}
	while (aux / 10 != 0)
	{
		aux = aux / 10;
		size++;
	}
	
	//printf("valor del numero de digitos: %d\n", size);
	s = (char *) malloc(sizeof(char) * (size + 1));
	if (!s)
		return (0);
	s[size + 2] = '\0';
	i = 1;
	if (n < 0)
	{
		aux = -n;
		size--;
	}
	while (i <= size)
	{
		s[size - i] = 48 + (aux % 10);
		//printf("valor de dentro %d\n", (aux % 10));
		//printf("valor del string %c\n", s[size - i]);
		aux = aux / 10;
		i++;
	}
	if (n < 0)
		return (ft_strjoin("-", s));
	return (s);
}
