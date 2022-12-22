/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexlower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:53:38 by jnevado-          #+#    #+#             */
/*   Updated: 2022/12/22 12:06:25 by jaimenevado      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexlower(unsigned long long num, int *count)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789abcdef";
	if (num > 15)
		ft_printf_hexlower(num / 16, count);
	ft_printf_char(str[num % 16], count);
}
