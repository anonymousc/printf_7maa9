/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:06:47 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/20 15:06:08 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
void	ft_putchar(char s, int *c);
void	ft_putstr(char *s, int *c);
void	ft_putnbr(int n, int *c);
void	ft_puthex(unsigned long n , int *c);
void	ft_putaddr(unsigned long n  , int *c);
void    ft_putunsinged(unsigned k, int *c);
void    ft_putHEX(unsigned long n,int  *c);
int ft_vprintf(const char *frm, va_list args);
int	ft_printf(const char *frm, ...);
#endif