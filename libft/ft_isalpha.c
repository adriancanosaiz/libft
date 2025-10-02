/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:22:19 by acano-sa          #+#    #+#             */
/*   Updated: 2025/09/30 10:41:51 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Checks if the given character is an alphabetic letter (either uppercase or lowercase).
/// @param c The character to be checked.
/// @return Returns a non-zero value if the character is an alphabetic letter, otherwise returns 0.
/// @note This function checks if the character falls within the ASCII ranges for uppercase (A-Z) or lowercase (a-z) letters.

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
