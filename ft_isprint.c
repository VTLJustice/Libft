/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:20:38 by rradules          #+#    #+#             */
/*   Updated: 2023/03/13 20:40:36 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isprint(' '));
	return (0);
}*/
