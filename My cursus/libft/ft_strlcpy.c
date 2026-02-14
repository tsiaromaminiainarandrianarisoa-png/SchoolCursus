/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:06:19 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/08 10:07:19 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	loc;
	size_t	lens;

	loc = 0;
	lens = ft_strlen((char *)src);
	if (size != 0)
	{
		while (src[loc])
		{
			if (loc == (size - 1))
				break ;
			dest[loc] = src[loc];
			loc++;
		}
		dest[loc] = '\0';
	}
	return (lens);
}
