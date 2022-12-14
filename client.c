/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:47 by jnevado-          #+#    #+#             */
/*   Updated: 2022/12/14 14:59:43 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_reception(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("ack");
}

void	ft_send(int pid, char c)
{
	int		position;

	position = 0;
	while (position < 8)
	{
		if ((c % 2 == 1))
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		c = c / 2;
		position++;
		usleep(100);
	}
	ft_printf(" ");
}

int	main(int argc, char **str)
{
	int	i;
	int	pid;

	i = 0;
	if (!(argc == 3))
	{
		ft_printf("Numero de parametros erroneos");
		return (0);
	}
	else
	{
		pid = ft_atoi(str[1]);
		while ((str[2][i]))
		{
			ft_send(pid, str[2][i]);
			i++;
		}
		ft_send('\0', pid);
	}
	signal(SIGUSR1, ft_reception);
	return (0);
}
