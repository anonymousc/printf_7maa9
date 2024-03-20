/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsinged.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:11:59 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/20 15:03:23 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putunsgined(unsigned k, int *c)
{
    if (k < 10)
        ft_putchar(k + '0', c);
    if (k >= 10)
    {
        ft_putunsgined(k / 10, c);
        ft_putunsgined(k % 10, c);
        ft_putchar(k + '0', c);
    }   
}