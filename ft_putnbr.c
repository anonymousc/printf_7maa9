/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:24:02 by aessadik          #+#    #+#             */
/*   Updated: 2024/01/26 10:56:16 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	int *c;
	long	nb;

	nb = n;
	if (nb <= -1)
	{
		nb *= -1;
		ft_putchar('-', &c);
		//*c++;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		//*c++;
	}
	else
	{
		ft_putchar(nb + '0', &c);
		//*c++;
	}
	return(c)
	
}

int main()
{
    ft_putnbr(1213123);
}