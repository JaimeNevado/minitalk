/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:43:29 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/20 16:24:49 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;

	aux = *lst;
	if (!aux)
		return ;
	while (aux)
	{
		gon = aux->next;
		del(aux->content);
		free(aux);
		aux = gon;
	}
	*lst = NULL;
}
