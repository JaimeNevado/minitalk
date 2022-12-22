/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:52:01 by jnevado-       #+#    #+#             */
/*   Updated: 2022/04/28 17:53:54 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t	destsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(dest);
	while (*dest)
		dest++;
	if (size >= destsize)
		return (destsize + ft_strlen(src));
	while (i < destsize - size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size + ft_strlen(src));
}
