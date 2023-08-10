/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:06:38 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 17:09:51 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (i == 0)
	{
		return ((char *) haystack);
	}
	while (*haystack && len-- >= i)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
		{
			return ((char *) haystack);
		}
		haystack++;
	}
	return (NULL);
}
