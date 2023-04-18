/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:44:56 by rradules          #+#    #+#             */
/*   Updated: 2022/11/22 12:01:21 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

int	ft_atoi(char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	if (*nptr == '-')
		sign = sign * -1;
	
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (result * sign);
}
/*
int	main()
{
	char *str = "32115451";
	printf("La mia: %d\n", ft_atoi(str));
	printf("La suya: %d", atoi(str));
	return (0);
}*/
