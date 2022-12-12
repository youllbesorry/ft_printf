/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:24:54 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/12 16:10:38 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_find_the_type(char c, va_list var, size_t size)
{
	if (c == 'c')
		size += ft_putchar((int)va_arg(var, int));
	else if (c == 'd' || c == 'i')
		size += ft_putnbr((int)va_arg(var, int));
	else if (c == 's')
		size += ft_putstr((char *)va_arg(var, char *), size);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		size += ft_putptr((const void *)va_arg(var, const void *), \
		"0123456789abcdef", size);
	}
	else if (c == 'u')
		size += ft_putnbr((unsigned int)va_arg(var, unsigned int));
	else if (c == 'x')
		size += ft_putnbr_base((long int)va_arg(var, long int), \
		"0123456789abcdef");
	else if (c == 'X')
		size += ft_putnbr_base((long int)va_arg(var, long int), \
		"0123456789ABCDEF");
	return (size);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		size;
	va_list	var;

	i = 0;
	size = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(var, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[++i] == '\0' || str[i] == ' ' || str[i] == '%')
			{
				write(1, "%", 1);
				size++;
				continue ;
			}
			size += ft_find_the_type(str[i++], var, size);
			continue ;
		}
		else
			write(1, &str[i++], 1);
	}
	return (va_end(var), size + i - 2);
}
