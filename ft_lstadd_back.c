/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:59:21 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:41:37 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*void	print_list(t_list *list)
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

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	printf("List after adding nodes at the back:\n");
	print_list(list);

	// Clean up the list
	ft_lstclear(&list, free);

	return 0;
}*/
