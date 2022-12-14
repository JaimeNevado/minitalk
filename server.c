/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:53 by jnevado-          #+#    #+#             */
/*   Updated: 2022/12/14 15:20:26 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle_function(int signal, siginfo_t *info, void *context)
{
	int						digit;
	static int				i = 0;
	static unsigned char	c = 0;

	digit = 0;
	(void)context;
	if (signal == SIGUSR1)
		digit = 1;
	else if (signal == SIGUSR2)
		digit = 0;
	else
		exit(-1);
	c = c + (digit << i++);
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
	kill (info->si_pid, SIGUSR1);
}

int	main(void)
{
	int		pid;
	struct	sigaction sa;

	pid = getpid();
	printf("%d\n", pid);
	sa.sa_sigaction = ft_handle_function;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		pause();
		usleep(50);
	}
	return (0);
}
