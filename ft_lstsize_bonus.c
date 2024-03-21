/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:36:42 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/20 15:37:40 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes in the list 'lst'
int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		counter++;
	}
	return (counter);
}
