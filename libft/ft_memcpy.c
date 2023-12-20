/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:09:42 by igvisera          #+#    #+#             */
/*   Updated: 2023/09/29 19:33:20 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*mem1;
	char	*mem2;

	index = 0;
	if (!src && !dest)
		return (NULL);
	mem1 = ((char *)src);
	mem2 = ((char *)dest);
	if (n == 0)
		return (mem2);
	while (index < n)
	{
		mem2[index] = mem1[index];
		index++;
	}
	return (mem2);
}
