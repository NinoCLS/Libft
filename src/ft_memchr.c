/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:26:49 by nino              #+#    #+#             */
/*   Updated: 2023/11/07 19:35:30 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char const *data;

    i = 0;
    data = (unsigned char *)s;
    while (i < n)
    {
        if (data[i] == (unsigned char)c)
            return (data + i);
        i++;
    }
    return (NULL);
}