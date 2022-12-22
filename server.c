/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:53 by jnevado-          #+#    #+#             */
/*   Updated: 2022/12/22 12:21:05 by jaimenevado      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle_function(int signal, siginfo_t *info, void *context)
{
	static int		i;
	static char		byte;

	(void) context;
	if (signal == SIGUSR1)
		byte |= 0b1 << i;
	i++;
	if (i == 8)
	{
		ft_printf("%c", byte);
		if (byte == '\0')
		{
			ft_printf("\n");
			kill (info->si_pid, SIGUSR1);
		}
		i = 0;
		byte = 0;
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	pid = getpid();
	printf("%d\n", pid);
	sa.sa_sigaction = ft_handle_function;
	sa.sa_flags = SA_SIGINFO;
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
		usleep(50);
	}
	return (0);
}
