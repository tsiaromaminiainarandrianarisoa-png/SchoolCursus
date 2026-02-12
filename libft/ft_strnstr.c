/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:54:27 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/05 00:22:05 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	loc1;
	size_t	loc2;

	loc1 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[loc1] && loc1 < len)
	{
		loc2 = 0;
		while ((big[loc1 + loc2] == little[loc2]) && little[loc2]
			&& (loc1 + loc2 < len))
		{
			if (little[loc2 + 1] == '\0')
				return ((char *)&big[loc1]);
			loc2++;
		}
		loc1++;
	}
	return (NULL);
}
