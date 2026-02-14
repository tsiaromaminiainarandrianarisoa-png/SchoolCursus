/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:52:28 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/09 12:27:27 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	if (!set)
		return (ft_strdup(s1));
	while (start < end && (ft_strchr(set, s1[start])))
		start++;
	while (start < end && (ft_strchr(set, s1[end - 1])))
		end--;
	s = ft_substr(s1, start, (end - start));
	return (s);
}
