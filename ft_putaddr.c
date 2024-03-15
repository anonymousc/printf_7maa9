/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:35:38 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/13 22:29:31 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int  ft_putaddr(unsigned long n, int *c)
{
    char *base = "0123456789abcdef";
    if(n < 16)
    {
        ft_putchar(base[n]);
        *c += 1;
        return (*c);
    }
    if (n > 15)
    {
        ft_putaddr(n / 16 , c);
        ft_putaddr(n % 16 , c);
        *c += 1;
    }
    // ft_putchar(base[n % 16]);
    *c += 1;
    return (*c);
}
int main()
{
    ft_puthexmin(42, 0);
    return 0;
}
