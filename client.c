/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:47 by jnevado-          #+#    #+#             */
/*   Updated: 2022/11/30 15:21:53 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>


//Libft
int	ft_isdigit(int n)
{
	if ((n < '0') || (n > '9'))
		return (0);
	return (1);
}

static	int	ft_checkspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (ft_checkspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	num *= sign;
	if (num != (int) num)
	{
		if (sign > 0)
			return (-1);
		return (0);
	}
	return ((int) num);
}

//minitalk
int	main(int argc, char **str)
{
	int	i;

	if (!(argc == 3))
	{
		printf("Numero de parametros erroneos");
		return (0);
	}
	i = ft_atoi(str[1]);
	if (kill(i, SIGUSR2))
		printf("Ha fallado");
	else
		printf("Ha funcionado");

	return (0);
}
