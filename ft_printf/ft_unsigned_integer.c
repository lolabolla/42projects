/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:30:30 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 17:32:19 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_len(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb == 0 || !nb)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_unsigned_integer(unsigned int a)
{
	unsigned int	nb;
	unsigned int	i;

	i = a;
	nb = a;
	if (nb > 9)
	{
		ft_unsigned_integer(nb / 10);
		nb %= 10;
	}
	ft_putchar_fd(nb + '0', 1);
	return (ft_unsigned_len(i));
}
