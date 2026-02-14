/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:34:33 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/14 08:29:18 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int 	loc;
	int		len;
	va_list	args;

	loc = 0;
	len = 0;
	va_start(args, s);
	while (s[loc])
	{
		if (s[loc] == '%')
		{
			//appele un fonction en fonction de s[loc + 1];
			loc = loc + 1;
			//len = len + (/*longueur de la chaine ajoutee*/);
		}
		ft_putchar_fd(s[loc], 1);
		loc++;
		len++;
	}
	va_end(args);
	return (len);
}
