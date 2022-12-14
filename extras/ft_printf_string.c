/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:21:19 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 11:49:14 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *cont)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_printf_char(str[i], cont);
		i++;
	}
}

void	ft_printf_string(char *str, int *cont)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)", cont);
		return ;
	}
	while (str[i])
	{
		ft_printf_char(str[i], cont);
		i++;
	}
}
