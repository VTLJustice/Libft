/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:41:33 by rradules          #+#    #+#             */
/*   Updated: 2023/05/11 18:04:14 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	j;
	unsigned int	i;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	i = start;
	if (len + start > len_s)
		len = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (j < len && len_s > start)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
