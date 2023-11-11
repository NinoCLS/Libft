/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:12:32 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 16:32:52 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
		nmemb = size - 1;
	ptr = malloc(sizeof(char) * (nmemb * size));
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
