/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:07:02 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/04 23:22:34 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == cc)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == cc)
		return ((char *)s);
	return (NULL);
}
