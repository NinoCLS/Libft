/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:54:21 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:00 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	i = -1;
	src = (char *)source;
	dest = (char *)destination;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			dest[n] = src[n];
	}
	else
	{
		while (++i < n)
			dest[i] = src[i];
	}
	return (destination);
}
