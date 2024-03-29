/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:24:02 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/20 14:53:24 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *c)
{
	unsigned int	nb;
	

	if (n < 0)
	{
		ft_putchar('-' , c);
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
		ft_putnbr(nb / 10, c);
	ft_putchar(nb % 10 + '0' , c);
}
