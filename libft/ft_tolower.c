/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:46:48 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/10 16:06:51 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z')
		n = n + 32;
	return (n);
}