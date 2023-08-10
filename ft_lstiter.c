/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:40 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:44:02 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	print_double(void *data)
{
	double *value = (double *)data;
	printf("%.2f\n", *value);
}

int	main(void)
{
	t_list *list = ft_lstnew(malloc(sizeof(double)));
	t_list *node1 = ft_lstnew(malloc(sizeof(double)));
	t_list *node2 = ft_lstnew(malloc(sizeof(double)));

	if (!list || !node1 || !node2)
	{
		printf("Failed to allocate memory for nodes.\n");
		return 1;
	}

	*(double *)list->content = 3.14;
	*(double *)node1->content = 2.718;
	*(double *)node2->content = 1.618;

	list->next = node1;
	node1->next = node2;

	printf("List before iteration:\n");
	ft_lstiter(list, print_double);

	// Clean up the list
	ft_lstclear(&list, free);

	return 0;
}*/
