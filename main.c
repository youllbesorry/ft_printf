/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:15:03 by bfaure            #+#    #+#             */
/*   Updated: 2022/12/13 14:59:20 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char	str[10];
	
	printf(" %d\n", ft_printf("%p %p", ULONG_MAX, -ULONG_MAX));
	printf(" %d\n", printf("%p %p", ULONG_MAX, -ULONG_MAX));
}
