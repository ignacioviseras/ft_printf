/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:36:57 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/20 17:50:02 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	index;
	size_t	rindex;

	str = NULL;
	if (s1 != '\0' && set != '\0')
	{
		index = 0;
		rindex = ft_strlen(s1);
		while (s1[index] && ft_strchr(set, s1[index]))
			index++;
		while (s1[rindex - 1] && ft_strchr(set, s1[rindex - 1])
			&& rindex > index)
			rindex--;
		str = (char *)ft_calloc(rindex - index + 1, sizeof(char));
		if (str)
			ft_strlcpy(str, (char *)&s1[index], rindex - index + 1);
	}
	return (str);
}
