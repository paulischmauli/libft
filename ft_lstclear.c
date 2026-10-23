/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 15:03:26 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/23 16:30:54 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p_next;
	}
}
