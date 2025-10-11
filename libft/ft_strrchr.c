/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:59:30 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/09 13:30:05 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Locates the last occurrence of the character c in the string s.
/// @param s The string to be searched.
/// @param c The character to be located 
///		(passed as an int, but treated as a char).
/// @return A pointer to the last occurrence 
///		of the character c in the string s, 
///		or NULL if the character is not found. 
///		If c is '\0', returns a pointer to the null terminator of s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;

	str = (char *)s;
	last = NULL;
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)c)
			last = str;
		str++;
	}
	if ((unsigned char)c == '\0')
		return (str);
	return (last);
}
