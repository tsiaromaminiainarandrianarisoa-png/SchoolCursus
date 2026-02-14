/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:53:21 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:07:50 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			loc;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	loc = 0;
	while (loc < n)
	{
		if (ss1[loc] != ss2[loc])
			return (ss1[loc] - ss2[loc]);
		loc++;
	}
	return (0);
}
