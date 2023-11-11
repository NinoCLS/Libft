/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:11:51 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 15:34:09 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0' || len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
