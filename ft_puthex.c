/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:21:28 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/13 22:31:40 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexmin(unsigned long n , int *c)
{
    char *hex = "01234567889ABCDEF";
    if(n < 16)
    {
        ft_putchar(hex[n]);
        *c += 1;
        return (*c);
    }
    if (n > 15)
    {
        ft_puthexmin(n / 16, c);
        ft_puthexmin(n % 16, c);
        *c += 1;
    }   
    ft_putchar(hex[n % 16]);
    *c += 1;
    return (*c);
}
int main()
{
    ft_puthexmin(42, 0);
    return 0;
}