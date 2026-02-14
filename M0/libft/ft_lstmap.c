/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiarran <tsiarran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:11:37 by tsiarran          #+#    #+#             */
/*   Updated: 2026/02/08 13:39:53 by tsiarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newo;
	t_list	*newl;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		cont = f(lst->content);
		newo = ft_lstnew(cont);
		if (!newo)
		{
			del(cont);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newo);
		lst = lst->next;
	}
	return (newl);
}
