/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:21:32 by igvisera          #+#    #+#             */
/*   Updated: 2022/09/11 21:42:24 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*mem;
	size_t	index;

	mem = (char *)s;
	index = 0;
	while (index != n)
	{
		mem[index] = c;
		index++;
	}
	return (s);
}
