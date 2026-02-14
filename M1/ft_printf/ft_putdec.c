/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:34:33 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/14 09:39:46 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putdec(va_list args)
{
	int		nbr;
	char	nb;

	nbr = va_arg(args, int);
	ft_putnbr_d(nbr, 1);
	nb = ft_itoa(nbr);
	return (ft_strlen(nb));
}
