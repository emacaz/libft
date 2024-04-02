/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:09:10 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/20 17:10:05 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creates new list by applying 'f' to each element of 'lst'
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst -> content);
		element = ft_lstnew(content);
		if (!element)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst -> next;
	}
	return (new);
}
