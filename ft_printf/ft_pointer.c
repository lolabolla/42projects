/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:34:56 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 17:37:46 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long nb)
{
	unsigned long long	i;

	i = 0;
	if (nb == 0 || !nb)
		return (1);
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_ptr(unsigned long long a, char s)
{
	unsigned long long	count;

	count = a;
	if (a >= 16)
	{
		ft_ptr((a / 16), s);
		a %= 16;
	}
	if (a < 10)
		ft_putchar_fd(a + '0', 1);
	else
	{
		ft_putchar_fd((a - 10 + 'a'), 1);
	}
	return (ft_ptr_len(count));
}

int	ft_pointer(void *ptr)
{
	int	a;

	if (!ptr)
	{
		write (1, "0x0", 3);
		return (3);
	}
	else
	{
		write (1, "0x", 2);
		a = ft_ptr((unsigned long long)ptr, 'x');
	}
	return (a + 2);
}
