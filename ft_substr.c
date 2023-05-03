/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:41:33 by rradules          #+#    #+#             */
/*   Updated: 2023/05/03 15:04:53 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	d;
	unsigned int	i;
	unsigned int	a;

	a = ft_strlen(s);
	i = start;
	if (len + start > a)
		len = a - start;
	if (start > a)
		return (ft_strdup(""));
	subs = malloc(len + 1);
	if (!(subs))
		return (NULL);
	d = 0;
	while (d < len && a > start)
	{
		subs[d] = s[i];
		d++;
		i++;
	}
	subs[d] = '\0';
	return (subs);
}
