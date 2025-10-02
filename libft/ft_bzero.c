/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:03:02 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/01 19:53:29 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Sets the first n bytes of the memory area pointed to by s to zero (null bytes).
/// @param s Pointer to the memory area to be set to zero.
/// @param n Number of bytes to be set to zero.
/// @note This function is similar to the standard library function bzero.
/// It is often used to initialize memory before use.
/// It is important to ensure that the memory area pointed to by s is valid and has at least n bytes allocated.
/// If n is zero, the function does nothing.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s; // Cast the void pointer to an unsigned char pointer for byte-wise manipulation
	i = 0;
	while (i < n) // Loop through the first n bytes
	{
		str[i] = '\0';
		i++;
	}
}
