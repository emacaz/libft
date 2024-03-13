/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:51:07 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/13 11:51:10 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts lower-case letter to its corresponding upper-case
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
