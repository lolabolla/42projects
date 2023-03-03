/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchizhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:33:09 by vchizhov          #+#    #+#             */
/*   Updated: 2023/02/07 17:34:44 by vchizhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int nb)
{
	int	i;

	if (nb >= 0)
		i = 0;
	else
		i = 1;
	if (nb == 0 || !nb)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_integer(int a)
{
	int	i;

	i = a;
	ft_putnbr_fd(a, 1);
	return (ft_len(i));
}
