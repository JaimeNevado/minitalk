/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:35:37 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/20 16:32:50 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	strleng;

	strleng = ft_strlen(s);
	i = 0;
	if (start > strleng)
		return (ft_strdup(""));
	if (len == strleng && start < len)
		str = malloc((len - start) + 1);
	if (len > strleng)
		str = malloc(strleng + 1);
	if (len < strleng)
		str = malloc(len + 1);
	if (!s || !str)
		return (ft_strdup(""));
	while (len-- && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
