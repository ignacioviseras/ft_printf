/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:19:58 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/20 17:49:39 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c1;
	size_t	len_max;

	len_max = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	if (!s1 || !s2)
		return (NULL);
	c1 = (char *)ft_calloc(len_max, sizeof(char));
	if (!c1)
		return (NULL);
	ft_strlcpy(c1, (char *)s1, ft_strlen((const char *)s1) + 1);
	ft_strlcat(c1, s2, len_max);
	return (c1);
}
