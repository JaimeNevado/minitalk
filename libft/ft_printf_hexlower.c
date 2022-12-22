/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexlower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:53:38 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/18 16:07:13 by jnevado-         ###   ########.fr       */
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

/*
int	main(void)
{
	int	*t;

	*t = 12;
	ft_printf_hexlower(160, t);
	return (0);
}
*/