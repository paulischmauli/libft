/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 11:08:05 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/22 11:42:09 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*s;

	if (!n || !size)
		return (malloc(1));
	if (size > SIZE_MAX / n)
		return (NULL);
	s = malloc(n * size);
	if (!s)
		return (NULL);
	ft_bzero(s, n * size);
	return (s);
}
