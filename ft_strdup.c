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

#include <stdio.h>
#include <stdlib.h>  // For free


int main() {
	// Typical string
	char *dup1 = ft_strdup("Hello, World!");
	printf("Typical string: %s\n", dup1);
	free(dup1);  // Remember to free the allocated memory

	// Empty string
	char *dup2 = ft_strdup("");
	printf("Empty string: %s\n", dup2);
	free(dup2);

	// Very long string
	char *long_str = "This is a very long string to test the strdup function. It should be duplicated correctly.";
	char *dup3 = ft_strdup(long_str);
	printf("Long string: %s\n", dup3);
	free(dup3);

	// Simulate memory allocation failure (Optional, remove if not relevant)
	// To test this, you might need to temporarily modify ft_strdup to force a NULL return
	/*
	char *dup4 = ft_strdup("Memory allocation failure test");
	if (!dup4) {
		printf("Failed to allocate memory\n");
	} else {
		printf("Memory allocation test: %s\n", dup4);
		free(dup4);
	}
	*/

	return 0;
}
