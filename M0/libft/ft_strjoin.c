/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:32:21 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/08 11:12:42 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	size_t	loc;
	size_t	loc2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)malloc(sizeof(char) * len);
	loc = 0;
	if (!s)
		return (NULL);
	while (s1[loc])
	{
		s[loc] = s1[loc];
		loc++;
	}
	loc2 = 0;
	while (s2[loc2])
	{
		s[loc2 + loc] = s2[loc2];
		loc2++;
	}
	s[loc2 + loc] = '\0';
	return (s);
}
