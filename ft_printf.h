/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:01 by igvisera          #+#    #+#             */
/*   Updated: 2023/12/04 21:29:24 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include "stdarg.h"
# include <stdio.h>
# include <unistd.h>

# ifndef HEXLOWER
#  define HEXLOWER "0123456789abcdef"
# endif

# ifndef HEXUPPER
#  define HEXUPPER "0123456789ABCDEF"
# endif

int	ft_printf(char const *format, ...);
int	ft_print_char(int s);
int	ft_print_string(char *s);
int	ft_print_percent(void);
int	ft_print_unsigned(unsigned int n);
int	ft_print_int(int n);
int	ft_print_hex(unsigned long long n, char *baseFormat);
int	ft_print_pointer(unsigned long long n);

#endif
