/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:17:53 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:17 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < n)
		ft_memcpy(dest, src, srclen + 1);
	else if (n != 0)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
	}
	return (srclen);
}
