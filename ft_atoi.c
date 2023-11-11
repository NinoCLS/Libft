/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:10:52 by nclassea          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:04 by nclassea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	out;

	out = 0;
	sign = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
	{
		sign++;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		out *= 10;
		out += *str - 48;
		str++;
	}
	if (sign == 1)
		out *= -1;
	return (out);
}
