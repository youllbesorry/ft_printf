/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:34:46 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/08 15:01:39 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static void	ft_putchar(int a)
{
	a += '0';
	write(1, &a, 1);
}

size_t	ft_putnbr(int n, unsigned long long size)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n *= -1, 1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, 1);
		ft_putnbr(n % 10, 1);
	}
	else
	{
		size++;
		ft_putchar(n);
	}
	return (size);
}
