/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:54:15 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:42:29 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = ft_lstnew(malloc(sizeof(int)));

	if (!list)
	{
		printf("Failed to allocate memory for the list node.\n");
		return 1;
	}

	*(int *)list->content = 42;

	printf("Content of the list before deletion: %d\n", *(int *)list->content);

	ft_lstdelone(list, free_content);

	if (list)
		printf("Content of the list after deletion: %d\n", *(int *)list->content);
	else
		printf("List is empty.\n");

	return 0;
}*/
