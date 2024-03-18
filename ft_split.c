/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:50:50 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/18 20:50:54 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	size_t	start;
	size_t	end;
	char	**new_string;

	word_count = ft_strlen(s);
	new_string = malloc(sizeof(char *) * (word_count + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	start = 0;
	while (i < word_count)
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		end = start;
		while (s[end] != '\0' && s[end] != '\0')
			end++;
		new_string[i] = (char *)malloc(end - start + 1);
		if (!new_string[i])
		{
			while (i > 0)
				free(new_string[i--]);
			free(new_string);
			return (NULL);
		}
		ft_strncpy(new_string[i], s + start, end - start);
		new_string[i][end - start] = '\0';
		start = end;
		i++;		
	}
	new_string[word_count] = NULL;
	return (new_string);
}
