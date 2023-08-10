/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:40:25 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:40:24 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
		while (lst->next)
			lst = lst->next;
	return (lst);
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

	list = node1;
	node1->next = node2;
	node2->next = node3;

	t_list *last = ft_lstlast(list);
	if (last)
	{
		printf("Last element of the list: %d\n", *(int *)last->content);
	}
	else
	{
		printf("List is empty.\n");
	}

	// Clean up the list
	ft_lstclear(&list, free);

	return 0;
}*/
