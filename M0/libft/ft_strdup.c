/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:34:17 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/09 11:02:26 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		len;
	int		loc;

	len = ft_strlen(s);
	ns = (char *)malloc(sizeof(char) * (len + 1));
	loc = 0;
	if (!ns)
		return (NULL);
	while (s[loc])
	{
		ns[loc] = s[loc];
		loc++;
	}
	ns[loc] = '\0';
	return (ns);
}
