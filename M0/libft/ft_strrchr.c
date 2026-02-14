/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:19:35 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/09 12:12:25 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	loc;

	loc = ft_strlen(s);
	while (loc > 0)
	{
		if (s[loc] == (unsigned char)c)
			return ((char *)&s[loc]);
		loc--;
	}
	if (s[0] == (unsigned char)c)
		return ((char *)&s[0]);
	return (NULL);
}
