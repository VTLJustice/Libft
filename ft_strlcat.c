/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:17:57 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 16:19:22 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	len_dst;

	i = 0;
	len = ft_strlen(dst);
	len_dst = ft_strlen(dst);
	if (len > dstsize)
		len = dstsize;
	while (src[i] && (len_dst + i + 1) < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (ft_strlen(src) + len);
}
/*
int	main()
{
	char a[] = "Pollos";
	char b[] = "robos";
	printf("%lu\n", strlcat(a, b, 0));
	printf("%zu", ft_strlcat(a, b, 0));
	return (0);
}*/
