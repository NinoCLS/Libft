/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:32:04 by nino              #+#    #+#             */
/*   Updated: 2023/11/05 19:18:58 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *dest, int value, size_t n)
{
    size_t  i;
    unsigned char *data;
    unsigned char val; 

    i = 0;
    val = (unsigned char)value;
    data = dest;
    while (i < n)
    {
        data[i] = val;     
        i++;
    }
    return (dest);
}