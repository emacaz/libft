/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:29:23 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/12 18:29:29 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// Appends 'src' to 'dst' of size 'dstsize'
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	len;

	dest_len = 0;
	src_len = ft_strlen(src);
	if ((src == NULL || dest == NULL) && size < 1)
		return (0);
	while (*(dest + dest_len) && dest_len < size)
		dest_len++;
	if (size > dest_len)
		len = dest_len + src_len;
	else
		return (size + src_len);
	while (*src && (dest_len + 1) < size)
		dest[dest_len++] = *src++;
	dest[dest_len] = '\0';
	return (len);
}
