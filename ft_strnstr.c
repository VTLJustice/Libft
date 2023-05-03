/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:06:38 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 19:11:39 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	d;

	d = ft_strlen(needle);
	if (d == 0)
	{
		return ((char *) haystack);
	}
	while (*haystack && len-- >= d)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, d) == 0)
		{
			return ((char *) haystack);
		}
		haystack++;
	}
	return (NULL);
}
