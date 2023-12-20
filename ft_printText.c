/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printText.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:06:52 by igvisera          #+#    #+#             */
/*   Updated: 2023/12/04 21:29:02 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int s)
{
	return (write(1, &s, 1));
}

int	ft_print_string(char *s)
{
	if (!s)
		return (write(1, "(null)", ft_strlen("(null)")));
	return (write(1, s, ft_strlen(s)));
}

int	ft_print_percent(void)
{
	return (write(1, "%%", 1));
}
