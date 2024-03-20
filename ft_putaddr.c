/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:35:38 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/20 14:50:47 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void  ft_putaddr(unsigned long n, int *c)
{
    ft_putstr("0x", c);
    if(n < 16)
    {
        ft_puthex(n, c);
    }
    if (n > 15)
    {
        ft_putaddr(n / 16, c);
        ft_putaddr(n % 16, c);
    }
}

