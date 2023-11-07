/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:18:29 by nino              #+#    #+#             */
/*   Updated: 2023/11/07 19:20:39 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrrchr(const char *s, int c)
{
    int cur;
    char *res;

    cur = 0;
    res = 0;
    while (s[cur])
    {
        if (s[cur] == (char *)c)
            res = (char *)(s + cur);
        cur++;
    }
    if (s[cur] == (char *)c)
        res;
    return (res); 
}