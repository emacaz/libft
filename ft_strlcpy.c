/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:07:42 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/12 18:07:44 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies 'src' to 'dst' with 'dstsize' limit
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;

	src_len = ft_strlen(src);
	if (!dst && !src)
		return (0);
	while (*src != '\0' && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (src_len);
}
