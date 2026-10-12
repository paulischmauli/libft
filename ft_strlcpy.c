/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paul <paul@student.42vienna.com>          #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 23:57:19 by paul             #+#    #+#              */
/*   Updated: 2026/10/13 00:11:35 by paul            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = -1;
	while (src[++len])
		;
	if (size == 0)
		return (len);
	while (src[++i] && i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (len);
}
