/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:01:46 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/17 20:01:49 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies string 'src' to 'dst', including null-terminator
static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// Concatenates 's1' and 's2' into a new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc(len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcpy(new_str + len_s1, s2);
	return (new_str);
}
