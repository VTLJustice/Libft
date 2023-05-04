#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
    int is_negative;
    int temp;
    int len;
    char *str;

    temp = n;
    len = 1;
    is_negative = 0;
    // determinar si el número es negativo
    if (n < 0)
    {
        is_negative = 1;
        temp = -n;
        len++;
    }

    // contar la cantidad de dígitos en el número
    while (temp > 9)
    {
        len++;
        temp = temp / 10;
    }

    // asignar memoria para la cadena que se devolverá
    str = (char *)malloc(len + 1);

    // en caso de que la asignación de memoria falle
    if (str == NULL)
        return NULL;

    // establecer el carácter final de la cadena
    str[len] = '\0';

    // convertir los dígitos en caracteres y agregarlos a la cadena
    while (len--)
    {
        str[len] = n % 10 + '0';
        n /= 10;
    }

    // agregar el signo negativo si es necesario
    if (is_negative)
        str[0] = '-';

    return str;
}
/*
int main()
{
  int n = -8763;
  printf("%s", ft_itoa(n));
  return 0;
}*/