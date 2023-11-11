/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:22:45 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/09 09:31:40 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	occ;
	int	i;

	occ = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			occ = i;
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		occ = i;
	if (occ == -1)
		return (NULL);
	else
		return ((char *)&s[occ]);
}
