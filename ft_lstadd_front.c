/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:13:11 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:37:53 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
}

int	main(void)
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

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	printf("List after adding nodes at the front:\n");
	print_list(list);

	// Clean up the list
	ft_lstclear(&list, free);

	return 0;
}*/
