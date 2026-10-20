/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 19:46:52 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 19:56:25 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
