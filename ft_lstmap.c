/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:06:38 by rradules          #+#    #+#             */
/*   Updated: 2023/05/12 19:33:50 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*start;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	start = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		node = ft_lstnew(content);
		while (!node)
		{
			(*del)(content);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, node);
		lst = lst->next;
	}
	return (start);
}
/*void    print_list(t_list *list)
{
    while (list)
    {
        printf("%s\n", (char *)list->content);
        list = list->next;
    }
}

// Mapping function: convert string to uppercase
void    *map_to_uppercase(void *content)
{
    char *str = (char *)content;
    size_t len = strlen(str);
    char *result = malloc(len + 1);
    if (!result)
        return NULL;

    for (size_t i = 0; i < len; i++)
        result[i] = toupper(str[i]);
    result[len] = '\0';

    return result;
}

int    main(void)
{
    t_list *list = NULL;
    t_list *mapped_list = NULL;

    // Create a test list
    list = ft_lstnew(strdup("hello!"));

    printf("Original List:\n");
    print_list(list);

    mapped_list = ft_lstmap(list, map_to_uppercase, free);
    if (mapped_list)
    {
        printf("Mapped List:\n");
        print_list(mapped_list);
        ft_lstclear(&mapped_list, free);
    }
    else
    {
        printf("Mapping failed!\n");
    }

    ft_lstclear(&list, free);
    return 0;
}*/
