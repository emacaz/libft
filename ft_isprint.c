/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:35:18 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/11 19:35:34 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the character is ASCII printable
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
