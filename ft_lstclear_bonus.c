/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:51:30 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/20 16:54:20 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Clears the list 'lst', freeing nodes with 'del' function
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temporal;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temporal = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temporal;
	}
	*lst = 0;
}
