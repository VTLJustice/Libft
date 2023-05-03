/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:17:28 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 18:21:39 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		d;
	char	*str;

	str = (char *) s;
	d = 0;
	while (str[d] != (char) c)
	{
		if (str[d] == 0)
		{
			return (NULL);
		}
		d++;
	}
	return (&str[d]);
}
