/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:46:55 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/19 18:49:59 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculates 'base' raised to the power of 'exp'
long int	static	ft_base(long int base, size_t exp, int *value)
{
	long int	number;

	*value = 1;
	if (exp == 0)
		return (1);
	number = base;
	while (--exp)
		number *= base;
	return (number);
}

// Converts an integer 'n' into a null-terminated string
char	*ft_itoa(int n)
{
	int		value;
	size_t	digit;
	char	*number;

	digit = 1;
	while (n / ft_base(10, digit, &value))
		digit++;
	if (n < 0)
	{
		value = -1;
		digit++;
	}
	number = (char *)ft_calloc(digit + 1, sizeof(char));
	if (!number)
		return (0);
	while (--digit)
	{
		number[digit] = (char)(value * (n % 10) + '0');
		n /= 10;
	}
	if (value == 1)
		number[digit] = (char)((n % 10) + '0');
	else
		number[0] = '-';
	return (number);
}
