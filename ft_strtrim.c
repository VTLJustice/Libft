/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:30:55 by rradules          #+#    #+#             */
/*   Updated: 2023/05/03 16:08:24 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;
	char	*dst;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[len]))
		len--;
	dst = (ft_substr(s1, i, (len - i) + 1));
	return (dst);
}
