/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:53 by jnevado-          #+#    #+#             */
/*   Updated: 2022/11/29 17:01:36 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void	handle_function(int sig)
{
	printf("Stop not allowed\n");
}


int	main(void)
{
	struct sigaction sa;
	sa.sa_handler = &handle_function;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGTSTP, &sa, NULL);
	int	pid;

	pid = getpid();
	while (1)
	{
		sleep(1);
	}
	return (0);
}
