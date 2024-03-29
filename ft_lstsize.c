/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:21:16 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:38:55 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	t_list *node3 = ft_lstnew(malloc(sizeof(int)));

	if (!node1 || !node2 || !node3)
	{
		printf("Failed to allocate memory for nodes.\n");
		return 1;
	}

	*(int *)node1->content = 1;
	*(int *)node2->content = 2;
	*(int *)node3->content = 3;

	list = node1;
	node1->next = node2;
	node2->next = node3;

	int size = ft_lstsize(list);
	printf("Size of the list: %d\n", size);

	// Clean up the list
	ft_lstclear(&list, free);

	return 0;
}*/
