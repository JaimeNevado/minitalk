/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:20:17 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 12:55:58 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_unsigned(unsigned int num, int *cont)
{
	if (num >= 10)
	{
		ft_printf_integer(num / 10, cont);
		num = num % 10;
	}
	ft_printf_char(num + '0', cont);
}
