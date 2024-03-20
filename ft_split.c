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

// Frees memory allocated for each string in array 'res'
static	void	ft_free(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

// Counts the number of words in 's' separated by char 'c'
static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

// Writes split words into 'res', returns NULL on failure
static	char	**write_result(char const *s, char c, char	**res)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			res[word] = ft_substr(s, start, i - start + 1);
			if (!res[word])
			{
				ft_free(res);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	res[word] = 0;
	return (res);
}

// Splits string 's' by char 'c', returns array of strings
char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**res;

	i = 0;
	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (0);
	res = write_result(s, c, res);
	return (res);
}
