/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:57:42 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:21:44 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	loc;

	loc = 0;
	while (loc < n && s1[loc] && s2[loc])
	{
		if (s1[loc] != s2[loc])
			return ((unsigned char)s1[loc] - (unsigned char)s2[loc]);
		loc++;
	}
	if (loc < n)
		return ((unsigned char)s1[loc] - (unsigned char)s2[loc]);
	return (0);
}
