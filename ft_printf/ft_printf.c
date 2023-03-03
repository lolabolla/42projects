/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:10:42 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 19:48:45 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_type(char c)
{
	if ((c == 'c') || (c == 's') || (c == 'p')
		|| (c == 'd') || (c == 'i') || (c == 'u')
		|| (c == 'x') || (c == 'X') || (c == '%'))
	{
		return (c);
	}
	return (0);
}

int	verific(va_list ap, char s)
{
	int	i;

	i = 0;
	if (s == 'c')
		i += ft_char(va_arg(ap, int));
	else if (s == 's')
		i += ft_string(va_arg(ap, char *));
	else if (s == 'p')
		i += ft_pointer(va_arg(ap, void *));
	else if (s == 'd' || s == 'i')
		i += ft_integer(va_arg(ap, int));
	else if (s == 'u')
		i += ft_unsigned_integer(va_arg(ap, unsigned int));
	else if (s == 'x' || s == 'X')
		i += ft_hex(va_arg(ap, unsigned int), s);
	else if (s == '%')
		i += ft_percent(s);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list			ap;
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	va_start(ap, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		else
		{
			i++;
			count += verific(ap, find_type(format[i]));
		}
		i++;
	}
	va_end(ap);
	return (count);
}
