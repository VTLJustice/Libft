/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:02:43 by rradules          #+#    #+#             */
/*   Updated: 2023/03/15 19:13:49 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *str, size_t c, size_t n)
{
	size_t			a;
	unsigned char	*b;

	a = 0;
	b = (unsigned char *)str;
	while (a < n)
	{
		*b = (unsigned char)c;
		a++;
		b++;
	}
	return (str);
}
/*
int	main()
{
	char str[50];

	strcpy(str, "Esto es un ejemplo para ver como funciona");
	puts(str);

	ft_memset(str, 'A', 10);
	puts(str);

	return (0);
}*/
