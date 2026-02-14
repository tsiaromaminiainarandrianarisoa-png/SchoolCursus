/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:26:23 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:20:44 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	loc;
	size_t	lend;
	size_t	lens;
	size_t	len;

	lend = ft_strlen(dst);
	lens = ft_strlen((char *)src);
	len = lend + lens;
	loc = 0;
	if (size > lend && size != 0)
	{
		while (src[loc])
		{
			if (lend == (size - 1))
				break ;
			dst[lend] = src[loc];
			loc++;
			lend++;
		}
	}
	if (size <= lend)
		return (size + lens);
	dst[lend] = '\0';
	return (len);
}
