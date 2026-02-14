/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:46:37 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/14 09:50:11 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putint(va_list args)
{
	int		nbr;
	char	nb;

	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, 1);
	nb = ft_itoa(nbr);
	return (ft_strlen(nb));
}
