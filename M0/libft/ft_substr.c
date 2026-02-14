/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:32:42 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/09 12:36:22 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	loc;
	size_t	lens;
	size_t	s_len;

	lens = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	while (((lens < len) && (start + lens < s_len)))
		lens++;
	sub = malloc(sizeof(char) * (lens + 1));
	loc = 0;
	if (!sub)
		return (NULL);
	while (loc < lens)
	{
		sub[loc] = (char)s[start++];
		loc++;
	}
	sub[loc] = '\0';
	return (sub);
}
