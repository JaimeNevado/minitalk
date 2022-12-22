/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:40:00 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/18 16:43:10 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"

void	ft_printf_char(char c, int *cont);
void	ft_printf_string(char *str, int *cont);
void	ft_printf_decimal(int num, int *cont);
void	ft_printf_integer(int num, int *cont);
void	ft_printf_unsigned(unsigned int num, int *cont);
void	ft_printf_hexlower(unsigned long long num, int *cont);
void	ft_printf_hexupper(unsigned long long num, int *count);
int		ft_printf(const char *str, ...);

#endif