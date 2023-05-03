/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:17:57 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 18:05:54 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(dst);
	if (a > dstsize)
		a = dstsize;
	while (src[i] && (b + i + 1) < dstsize)
	{
		dst[b + i] = src[i];
		i++;
	}
	dst[b + i] = '\0';
	return (ft_strlen(src) + a);
}
/*
int	main()
{
	char a[] = "pollas";
	char b[] = "rabos";
	printf("%lu\n", strlcat(a, b, 0));
	printf("%zu", ft_strlcat(a, b, 0));
	return (0);
}*/
