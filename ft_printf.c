/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:24:54 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/08 15:12:25 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_find_the_type(char c, va_list var, size_t size)
{
	if (c == 'c')
		size += ft_putchar_fd(va_arg(var, char), size);
	else if (c == 'd' || var == 'i')
		size += ft_putnbr_fd(va_arg(var, int), size);
	else if (c == 's')
		size += ft_putstr_fd(va_arg(var, char *), size);
	else if (c == 'p')
		size += ft_putstr_fd(va_arg(var, void *), size);
	else if (c == 'u')
		size += ft_putnbr_fd(va_arg(var, unsigned int), size);
	else if (c == 'x')
		size += ft_putnbr_base(va_arg(var, char *), "0123456789abcdef", size);
	else if (c == 'X')
		size += ft_putnbr_base(va_arg(var, char *), "0123456789ABCDEF", size);
	else if (c == '%')
	{
		write(1, '%', 1);
		size += 1;
	}
	return (size);
}

size_t	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	size;
	va_list	var;

	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(var, *str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_find_the_type(str[i], var, size);
			i++;
		}
		else
			write(1, str[i], 1);
		i++;
	}
	return (size);
}
