/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:07:48 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:35:46 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
/*
int	main(void)
{
	int data = 42;
	t_list *node = ft_lstnew(&data);

	if (node)
	{
		printf("Node created successfully.\n");
		printf("Content: %d\n", *(int *)node->content);
		printf("Next: %p\n", node->next);
	}
	else
	{
		printf("Failed to create node.\n");
	}

	free(node);
	return 0;
}*/
