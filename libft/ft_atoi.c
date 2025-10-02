/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:44:17 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/01 19:48:41 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Converts the initial portion of the string pointed to by str to int representation.
/// @param str The string to be converted.
/// @return The converted integer value. If the value exceeds the range of int, it returns -1 for overflow and 0 for underflow.
/// @note This function handles leading whitespace, optional sign, and numeric characters. It stops converting when a non-numeric character is encountered.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign; // 1 for positive, -1 for negative
	long long		result; // To handle overflow during conversion
	size_t			i; // Index for iterating through the string

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) // Skip whitespace characters
		i++;
	if (str[i] == '-' || str[i] == '+') // Handle optional sign
	{
		if (str[i] == '-') // If negative sign, set sign to -1
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') // Convert numeric characters to integer
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > 2147483647) // Check for overflow
			return (-1);
		if (result * sign < -2147483648) // Check for underflow
			return (0);
		i++;
	}
	return ((int)(result * sign));
}
