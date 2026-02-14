/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:22:46 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 13:30:55 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	loc;

	if (n == 0 || dest == src)
		return (dest);
	loc = 0;
	if (dest < src)
	{
		while (loc < n)
		{
			((char *)dest)[loc] = ((char *)src)[loc];
			loc++;
		}
	}
	else
	{
		loc = n;
		while (loc > 0)
		{
			loc--;
			((char *)dest)[loc] = ((char *)src)[loc];
		}
	}
	return (dest);
}
