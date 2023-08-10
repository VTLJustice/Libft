/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:18:50 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 15:20:28 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*temp_dst;
	char	*temp_src;

	i = 0;
	temp_dst = (char *) dst;
	temp_src = (char *) src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
/*
int	main()
{
	char	a[5] = "main";
	char	b[7] = "jungle";
	
	printf("%s", ft_memcpy(a,b,4));
	return (0);
}*/
