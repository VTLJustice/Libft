/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:43:23 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 15:32:35 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*temp_dst;
	const char	*temp_src;
	size_t		i;

	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	if (temp_dst < temp_src)
	{
		i = 0;
		while (i < n)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	else if (temp_dst > temp_src)
	{
		i = n;
		while (i != 0)
		{
			temp_dst[i - 1] = temp_src[i - 1];
			i--;
		}
	}
	return (dst);
}
/*
int	main()
{
	char	a[7] = "jungle";
	char	b[5] = "main";
	printf("%s", ft_memmove(a, b, 4));
	return (0);
}*/
