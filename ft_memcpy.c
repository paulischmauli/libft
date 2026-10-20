/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 12:46:09 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 12:46:12 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		d;
	const unsigned char	s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}
