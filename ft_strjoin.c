/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:54:24 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 18:07:35 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substring(char *s1, char *s2, char *s3)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i] != 0)
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*src;
	char	*str;

	dest = (char *)s1;
	src = (char *)s2;
	str = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	return (ft_substring(dest, src, str));
}
