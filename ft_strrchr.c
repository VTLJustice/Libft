/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:23:00 by rradules          #+#    #+#             */
/*   Updated: 2023/04/12 18:27:54 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		d;
	char	*str;

	str = (char *) s;
	d = ft_strlen(str);
	while (d >= 0)
	{
		if (str[d] == (char) c)
			return (&str[d]);
		d--;
	}
	return (NULL);
}
