/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:00:00 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/01 19:57:40 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Searches for the first occurrence of the character c (converted to an unsigned char) in the first n bytes of the memory area pointed to by s.
/// @param s Pointer to the memory area to be searched.
/// @param c The character to be located (passed as an int, but treated as an unsigned char).
/// @param n The number of bytes to be analyzed.
/// @return A pointer to the first occurrence of the character c in the memory area s, or NULL if the character is not found within the first n bytes.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		ch;

	str = (const unsigned char *)s; // Cast the void pointer to an unsigned char pointer for byte-wise manipulation
	ch = (unsigned char)c; 	  // Convert the int c to an unsigned char for comparison
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)(str + i)); // Return a pointer to the first occurrence of c
		i++;
	}
	return (NULL);
}
