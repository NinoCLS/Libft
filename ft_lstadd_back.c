/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:32:30 by nino              #+#    #+#             */
/*   Updated: 2023/11/11 15:48:12 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
   t_list *last;

   if (!*lst)
   {
       *lst = new;
       return;
   }
   last = ft_lstlast(*lst);
   last->next = new;
   new->next = NULL;
}
