/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 16:49:22 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/23 17:26:51 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_result;
	t_list	*new_node;
	t_list	*cur_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	l_result = NULL;
	cur_node = lst;
	while (cur_node)
	{
		new_content = f(cur_node->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&l_result, del);
			return (NULL);
		}
		ft_lstadd_back(&l_result, new_node);
		cur_node = cur_node->next;
	}
	return (l_result);
}
