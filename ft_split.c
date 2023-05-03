/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:57:10 by rradules          #+#    #+#             */
/*   Updated: 2023/05/03 17:32:03 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	helper;
	size_t	column;
	size_t	row;
	size_t	len;
	char	**result;

	i = 0;
	column = 0;
	row = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
		{
			column++;
		}
		i++;
	}
	result = malloc(column + 1);
	i = 0;
	while (s[i], i++)
	{
		if (s[i] == c)
		{
			*result = malloc(i + 1);
		}
		i++;
		helper = i;
	}
}

