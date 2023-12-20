/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:09:37 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/14 20:52:35 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", sizeof("-2147483648") - 1);
		return ;
	}
	else if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n >= 0)
	{
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putchar_fd((n % 10) + '0', fd);
		}
		else
		{
			ft_putchar_fd(n + '0', fd);
			return ;
		}
	}
}
