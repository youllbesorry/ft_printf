/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:56:22 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/12 16:28:37 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(const void *nbr, char *base)
{
	int				i;
	char			nbr_print[9];
	unsigned long	ptr;
	int				size;

	size = 0;
	ptr = (unsigned long) nbr;
	i = 8;
	while ((ptr / 16) > 0 || i >= 8)
	{
		nbr_print[i] = base[(ptr % 16)];
		ptr /= 16;
		i--;
	}
	nbr_print[i] = base[(ptr % 16)];
	while (i < 9)
	{
		write (1, &nbr_print[i++], 1);
		size++;
	}
	return (size + 3);
}
