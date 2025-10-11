/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:31:57 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/09 15:29:15 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (new)
	{
		*lst = new;
	}
}
