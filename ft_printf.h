/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:22:41 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/08 14:41:27 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h
# include <libft.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putstr(char *str);
void	ft_putchar(char c, unsigned long long size);
void	ft_putnbr_fd(int n);

#endif
