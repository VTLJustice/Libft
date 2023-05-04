/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:57:10 by rradules          #+#    #+#             */
/*   Updated: 2023/05/03 17:32:03 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  len;
    char **result;

    len = strlen(s);
    result = malloc(sizeof(char *) * (len + 1));
    if (!result)
        return NULL;

    i = 0;
    while (i < len)
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        j = i;
        while (s[j] != c && s[j] != '\0')
            j++;
        result[k] = malloc(sizeof(char) * (j - i + 1));
        if (!result[k])
            return NULL;
        strncpy(result[k], &s[i], j - i);
        result[k][j - i] = '\0';
        k++;
        i = j;
    }
    result[k] = NULL;
    return result;
}
/*
int main()
{
    char s[] = "Astu pata pota";
    char c = ' ';
    char **result = ft_split(s, c);
    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
            free(result);
    }
    return 0;
}*/