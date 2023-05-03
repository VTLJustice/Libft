/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:56:26 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 18:58:37 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			d;
	unsigned char	*str;
	unsigned char	to_find;

	d = 0;
	str = (unsigned char *) s;
	to_find = (unsigned char) c;
	while (d < n)
	{
		if (str[d] == to_find)
			return (&str[d]);
		d++;
	}
	return (NULL);
}
