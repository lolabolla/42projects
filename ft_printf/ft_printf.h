/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:34:55 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 19:35:28 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_percent(char c);
int	ft_char(int c);
int	ft_string(char *str);
int	ft_pointer(void *ptr);
int	ft_integer(int a);
int	ft_unsigned_integer(unsigned int a);
int	ft_hex(unsigned int a, char s);

#endif
