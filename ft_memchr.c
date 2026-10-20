/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 12:26:13 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/22 12:38:23 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;
	unsigned char		needle;

	src = (const unsigned char *)s;
	needle = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		if (src[i] == needle)
			return (src = src + i, (void *)src);
	}
	return (NULL);
}
