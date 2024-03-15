/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:06:50 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/13 22:26:28 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_vprintf(const char *frm, va_list args)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (frm[i])
    {
        if (frm[i] == '%')
        {
            i++;
            if (frm[i] == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (frm[i] == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (frm[i] == 'd')
                count += ft_putnbr(va_arg(args, int), &count);
            else if (frm[i] == 'x')
                count += ft_puthexmin(va_arg(args, unsigned int), &count);
            else if (frm[i] == 'p')
                count += ft_putstr("0x") + ft_putaddr(va_arg(args, unsigned long) , &count);
        }
        else
            count += ft_putchar(frm[i]);
        i++;
    }
    return (count);
}
int ft_printf(const char *frm, ...)
{
    va_list args;
    int count;

    va_start(args, frm);
    count = ft_vprintf(frm, args);
    va_end(args);
    return (count);
}
int main()
{

    ft_printf("%d\n",ft_printf("Hello %s, %d, %x, %p\n", "world", 42, 42, &"1"));
    return 0;
}
