/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:04:55 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 17:09:11 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xx_len(unsigned int nb)
{
	unsigned int	i;

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

int	ft_hex(unsigned int a, char s)
{
	unsigned int	count;

	count = a;
	if (a >= 16)
	{
		ft_hex((a / 16), s);
		a %= 16;
	}
	if (a < 10)
		ft_putchar_fd(a + '0', 1);
	else
	{
		if (s == 'X')
			ft_putchar_fd((a - 10 + 'A'), 1);
		else
			ft_putchar_fd((a - 10 + 'a'), 1);
	}
	return (ft_xx_len(count));
}
