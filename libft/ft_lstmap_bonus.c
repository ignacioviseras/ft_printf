/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:38:22 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 20:05:59 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*ldst;
	void	*res;

	if (!lst)
		return (NULL);
	ldst = NULL;
	while (lst)
	{
		res = f(lst->content);
		aux = ft_lstnew(res);
		if (!aux)
		{
			ft_lstclear(&ldst, del);
			del(res);
			return (NULL);
		}
		ft_lstadd_back(&ldst, aux);
		lst = lst->next;
	}
	return (ldst);
}
