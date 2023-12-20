/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:40:55 by igvisera          #+#    #+#             */
/*   Updated: 2022/09/17 21:28:44 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_lenght;
	size_t	src_lenght;

	index = 0;
	dst_lenght = ft_strlen(dst);
	src_lenght = ft_strlen(src);
	while (size <= dst_lenght)
		return (size + src_lenght);
	while (*dst)
		dst++;
	while (src[index] != '\0' && index < size - dst_lenght - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst_lenght + src_lenght);
}
