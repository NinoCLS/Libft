/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:57:16 by nino              #+#    #+#             */
/*   Updated: 2023/11/11 16:01:03 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *begin;
    t_list *tmp;

    begin = *lst;
    while (begin)
    {
        tmp = begin->next;
        ft_lstdelone(begin, del);
        begin = tmp;
    }
    *lst = NULL;
}