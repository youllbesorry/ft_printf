/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:22:41 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/08 17:37:13 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

size_t	ft_printf(const char *str, ...);
size_t	ft_putnbr_base(long int nbr, char *base, size_t size);
size_t	ft_putstr(char *str, size_t size);
size_t	ft_putchar(char c, size_t size);
size_t	ft_putnbr(int n, size_t size);

#endif
