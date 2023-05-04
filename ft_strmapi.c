#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     len;
    char    *str;
    unsigned int    i;

    len = ft_strlen(s);
    
    if (s == NULL || f == NULL)
        return NULL;

    str = (char *)malloc(len + 1);
    if (str == NULL)
        return NULL;

    i = 0;
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }

    str[len] = '\0';
    return str;
}