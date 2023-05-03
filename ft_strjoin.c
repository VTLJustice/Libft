/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:54:24 by rradules          #+#    #+#             */
/*   Updated: 2023/04/27 19:28:10 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substring(char *s1, char *s2, char *s3)
{
	size_t	c;
	size_t	d;

	d = 0;
	c = 0;
	while (s1[c] != 0)
	{
		s3[d] = s1[c];
		c++;
		d++;
	}
	c = 0;
	while (s2[c] != 0)
	{
		s3[d] = s2[c];
		c++;
		d++;
	}
	s3[d] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*src;
	char	*subs;

	dest = (char *)s1;
	src = (char *)s2;
	subs = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	if (!(subs))
		return (NULL);
	return (ft_substring(dest, src, subs));
}
