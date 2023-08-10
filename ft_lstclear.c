/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:02:34 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:43:20 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;
	t_list	*start;

	if (!lst || !del)
		return ;
	start = *lst;
	while (start)
	{
		tmp = start->next;
		del(start->content);
		free(start);
		start = tmp;
	}
	*lst = NULL;
}
/*void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = ft_lstnew(malloc(sizeof(int)));
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	t_list *node2 = ft_lstnew(malloc(sizeof(int)));

	if (!list || !node1 || !node2)
	{
		printf("Failed to allocate memory for nodes.\n");
		return 1;
	}

	*(int *)list->content = 1;
	*(int *)node1->content = 2;
	*(int *)node2->content = 3;

	list->next = node1;
	node1->next = node2;

	printf("List before clearing:\n");
	t_list *current = list;
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}

	ft_lstclear(&list, free_content);

	printf("List after clearing:\n");
	if (list)
	{
		printf("List is not empty.\n");
	}
	else
	{
		printf("List is empty.\n");
	}

	return 0;
}*/
