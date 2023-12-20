/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:52:02 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/22 11:04:50 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_mem;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	total_mem = nmemb * size;
	mem = malloc(total_mem);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_mem);
	return (mem);
}
