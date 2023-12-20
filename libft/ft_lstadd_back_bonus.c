/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 04:15:55 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 20:28:18 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (lst)
	{
		if (*lst)
		{
			iter = *lst;
			while (iter->next != NULL)
			{
				iter = iter->next;
			}
			iter->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
