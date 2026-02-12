/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:32:43 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:18:51 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	loc;
	char	*str;

	str = (char *)s;
	loc = 0;
	while (loc < n)
	{
		str[loc] = c;
		loc++;
	}
	return (str);
}
