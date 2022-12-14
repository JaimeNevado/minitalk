/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:59:55 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 11:54:45 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_decimal(int num, int *cont)
{
	long long	long_num;

	long_num = (long long)num;
	if (long_num < 0)
	{
		ft_printf_char('-', cont);
		long_num *= -1;
	}
	if (long_num >= 10)
	{
		ft_printf_integer(long_num / 10, cont);
		long_num = long_num % 10;
	}
	ft_printf_char(long_num + '0', cont);
}
