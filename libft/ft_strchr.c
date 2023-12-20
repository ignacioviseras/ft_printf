/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:04 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/20 17:49:28 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s && s[index] != '\0')
	{
		if (s[index] == (unsigned char)c)
			return ((char *)s + index);
		index++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
