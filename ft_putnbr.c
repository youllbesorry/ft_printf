/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:34:46 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/12 16:11:02 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_nbr(int a)
{
	a += '0';
	write(1, &a, 1);
}

int	ft_putnbr(long n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		size++;
		write(1, "-", 1);
		ft_putnbr(n *= -1);
	}
	else if (n > 9)
	{
		size += ft_putnbr(n / 10);
		size += ft_putnbr(n % 10);
	}
	else
	{
		size++;
		ft_putchar_nbr(n);
	}
	return (size);
}
