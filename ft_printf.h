/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:06:47 by aessadik          #+#    #+#             */
/*   Updated: 2024/03/13 22:16:54 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n, int *c);
int	ft_puthexmin(unsigned long n , int *c);
int	ft_putaddr(unsigned long n  , int *c);
int	ft_vprintf(const char *frm, va_list args);
int	ft_printf(const char *frm, ...);
#endif