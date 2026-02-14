/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:21:19 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/14 09:28:19 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putstr(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
	return (((int)(ft_strlen(str))));
}
