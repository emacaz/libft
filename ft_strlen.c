/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:51:41 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/11 19:51:42 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// Returns the length of the null-terminated string 's'
size_t	ft_strlen(const char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
