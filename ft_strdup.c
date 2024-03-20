/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:13:55 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/14 16:13:59 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies string 'src' to 'dst', including null-terminator
static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// Duplicates the string 's1' into newly allocated memory
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s1) + 1;
	dest = (char *)malloc(len);
	if (dest != NULL)
		ft_strcpy(dest, s1);
	return (dest);
}
