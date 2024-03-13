/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:11:06 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/13 13:11:10 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts upper-case letter to its corresponding lower-case
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
