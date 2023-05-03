/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:00:18 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 19:04:10 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				d;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	d = 0;
	while (d < n)
	{
		if (str1[d] == str2[d])
			d++;
		else
			return (str1[d] - str2[d]);
	}
	return (0);
}
