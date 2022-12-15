/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:56:15 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/15 14:30:42 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *base)
{
	size_t	a;

	a = 0;
	while (base[a] != '\0')
		a++;
	return (a);
}

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned int		len;
	char				nbr_print;
	int					size;

	size = 0;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		size++;
		write(1, "-", 1);
		ft_putnbr_base(nbr *= -1, base);
	}
	else if (nbr >= len)
	{
		size += ft_putnbr_base(nbr / len, base);
		size += ft_putnbr_base(nbr % len, base);
	}
	else
	{
		size++;
		nbr_print = base[nbr];
		write(1, &nbr_print, 1);
	}
	return (size);
}
