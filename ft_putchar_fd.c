/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:24:06 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/19 20:24:27 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the character 'c' to the given file descriptor 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
