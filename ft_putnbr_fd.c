/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:49:02 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/19 20:49:32 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the integer 'n' to the file descriptor 'fd'
void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('0' + number % 10, fd);
	}
	else
		ft_putchar_fd('0' + number, fd);
}
