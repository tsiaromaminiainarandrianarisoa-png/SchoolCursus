/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:35:00 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/09 21:37:51 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	if (n == 0)
		return (dest);
	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
