/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:18:08 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:02 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)source;
	dest = (char *)destination;
	if (dest == NULL && src == NULL)
		return (destination);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
