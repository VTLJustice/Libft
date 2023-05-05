/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:31:26 by rradules          #+#    #+#             */
/*   Updated: 2023/05/05 20:22:26 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			words++;
		}
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**result;

	len = ft_strlen(s);
	result = malloc(((count_words(s, c)) + 1) * sizeof(char *));
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
