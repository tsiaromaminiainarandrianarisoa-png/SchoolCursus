/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:15:15 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/04 21:35:25 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	loc;

	loc = 0;
	if (!s)
		return ;
	while (s[loc])
	{
		ft_putchar_fd(s[loc++], fd);
	}
}
