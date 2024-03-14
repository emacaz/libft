/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:59:48 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/13 14:59:50 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// Returns last concurrence found of 'c' in "s"
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	while (i != 0)
	{
		i--;
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}