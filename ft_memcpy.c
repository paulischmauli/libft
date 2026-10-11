/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paul <paul@student.42vienna.com>          #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 21:17:08 by paul             #+#    #+#              */
/*   Updated: 2026/10/11 21:23:22 by paul            ###   ########.fr        */
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
