/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:39:17 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/01 19:54:50 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Copies n bytes from memory area src to memory area dest.
/// @param dest Pointer to the destination memory area where bytes will be copied.
/// @param src Pointer to the source memory area from which bytes will be copied.
/// @param n Number of bytes to copy.
/// @return Returns a pointer to the destination memory area dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
