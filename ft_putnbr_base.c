/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:56:15 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/08 14:47:36 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *base)
{
	int	a;

	a = 0;
	while (base[a] != '\0')
		a++;
	return (a);
}

size_t	ft_putnbr_base(long int nbr, char *base, size_t size)
{
	int		len;
	char	nbr_print;

	len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr *= -1, base);
	}
	else if (nbr >= len)
	{
		ft_putnbr(nbr / len, base);
		ft_putnbr(nbr % len, base);
	}
	else
	{
		size++;
		nbr_print = base[nbr];
		write(1, &nbr_print, 1);
	}
	return (size);
}
