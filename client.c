/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:52:47 by jnevado-          #+#    #+#             */
/*   Updated: 2022/11/29 16:52:42 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

int	main(int argc, char **str)
{
	int	i;

	i = 0;
	if (!(argc == 3))
	{
		printf("Numero de parametros erroneos");
		return (0);
	}
	while(str[2][i])
	{
		printf("The PID is: %c\n", str[2][i]);
		i++;
	}
	kill
	return (0);
}
