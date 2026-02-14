/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:44:59 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/08 11:42:54 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	loc;

	loc = 0;
	if (!s || !f)
		return ;
	while (s[loc] != '\0')
	{
		(*f)(loc, &s[loc]);
		loc++;
	}
}
