/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:13:01 by nino              #+#    #+#             */
/*   Updated: 2023/11/07 19:26:22 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t src_len;
    size_t i;

    src_len = ft_strlen(dest);
    i = 0;
    if (destsize <= src_len)
        return (ft_strlen(src) + destsize);
    while (src[i] && (src_len +  i) < (destsize - 1))
    {
        dest[src_len + i] = src[i];
        i++;
    }
    dest[src_len + i] = 0;
    return (ft_strlen(src) + src_len);
    
}