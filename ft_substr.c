/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:10:59 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/17 19:11:03 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies up to 'len' chars from 'src' to 'dst'
static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

// Creates a substring from 's', starting at 'start' for 'len' characters.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	new_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	if (s_len - start < len)
		new_len = s_len - start;
	else
		new_len = len;
	substr = malloc(new_len + 1);
	if (substr)
	{
		ft_strncpy(substr, s + start, new_len);
		substr[new_len] = '\0';
	}
	return (substr);
}
