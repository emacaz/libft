/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:59:44 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/17 20:59:47 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new_string;

	while (set[i] != '\0')
	{
		if (s1[i] != set[i])
			new_string[i] = set[i];
	}
	new_string = malloc(ft_strlen(new_string) + 1);
	if (!new_string)
		return (NULL);
	return (new_string);
}
