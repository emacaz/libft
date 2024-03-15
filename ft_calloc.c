/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:13:32 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/14 16:13:38 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

// Allocates zero-initialized memory for 'count' elements of 'size'.
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (size != 0 && total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	else
		errno = ENOMEM;
	return (ptr);
}
