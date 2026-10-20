/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 12:55:35 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 17:49:50 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = -1;
	while (++i < maxlen && s[i])
		;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = ft_strnlen(dst, size);
	s_len = -1;
	while (src[++s_len])
		;
	if (i >= size)
		return (s_len + size);
	j = -1;
	while (src[++j] && i + j < size - 1)
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (s_len + i);
}
