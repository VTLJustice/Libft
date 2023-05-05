/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:57:10 by rradules          #+#    #+#             */
/*   Updated: 2023/05/05 19:38:42 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**result;

	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char *));
	k = 0;
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		result[k] = malloc((j - i + 1) * sizeof(char));
		if (!result[k])
			return (NULL);
		ft_memcpy(result[k], &s[i], (j - i));
		result[k][j - i] = '\0';
		k++;
		i = j;
	}
	result[k] = NULL;
	return (result);
}
