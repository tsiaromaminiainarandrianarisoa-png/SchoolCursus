/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:22:53 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:07:34 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			loc;
	unsigned char	*str;
	unsigned char	bruh;

	loc = 0;
	bruh = (unsigned char)c;
	str = (unsigned char *)s;
	while (loc < n)
	{
		if (str[loc] == bruh)
			return (&str[loc]);
		loc++;
	}
	return (NULL);
}
