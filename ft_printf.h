/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:22:41 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/12 16:10:52 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putnbr_base(long int nbr, char *base);
int	ft_putptr(const void *nbr, char *base, int size);
int	ft_putstr(char *str, int size);
int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr(long n);

#endif
