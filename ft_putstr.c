/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 03:11:28 by aessadik          #+#    #+#             */
/*   Updated: 2023/12/20 03:23:14 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return(i);
}
int ft_putstr(char *s)
{
    return(write(1,s,ft_strlen(s))); 
}
